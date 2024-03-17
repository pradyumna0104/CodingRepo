#include <bits/stdc++.h>
using namespace std;

// Function to compute epsilon closure of a state in NFA
set<int> epsilonClosure(const vector<set<int>>& nfa, int state) {
    set<int> closure;
    queue<int> pending;
    closure.insert(state);
    pending.push(state);
    
    while (!pending.empty()) {
        int current = pending.front();
        pending.pop();
        
        // Explore epsilon transitions
        for (int nextState : nfa[current]) {
            if (closure.find(nextState) == closure.end()) {
                closure.insert(nextState);
                pending.push(nextState);
            }
        }
    }
    
    return closure;
}

// Function to convert NFA to DFA
vector<set<int>> convertNFAtoDFA(const vector<set<int>>& nfa, const vector<map<char, set<int>>>& transitions, const set<char>& alphabet) {
    vector<set<int>> dfa;
    map<set<int>, int> dfaStateMap;
    queue<set<int>> pending;
    
    // Initial state of the DFA is epsilon closure of the initial state of NFA
    set<int> initial = epsilonClosure(nfa, 0);
    dfa.push_back(initial);
    dfaStateMap[initial] = 0;
    pending.push(initial);
    
    // Loop until all states are processed
    while (!pending.empty()) {
        set<int> current = pending.front();
        pending.pop();
        
        // For each input symbol
        for (char symbol : alphabet) {
            set<int> nextState;
            
            // For each state in the current DFA state
            for (int state : current) {
                // Explore all possible transitions from the current state in NFA
                auto it = transitions[state].find(symbol);
                if (it != transitions[state].end()) {
                    for (int nextStateCandidate : it->second) {
                        set<int> epsilonClosureNext = epsilonClosure(nfa, nextStateCandidate);
                        nextState.insert(epsilonClosureNext.begin(), epsilonClosureNext.end());
                    }
                }
            }
            
            // If the computed state is not in DFA, add it to DFA
            if (!nextState.empty() && dfaStateMap.find(nextState) == dfaStateMap.end()) {
                dfa.push_back(nextState);
                dfaStateMap[nextState] = dfa.size() - 1;
                pending.push(nextState);
            }
        }
    }
    
    return dfa;
}

int main() {
    // Example NFA with transitions
    vector<set<int>> nfa = {{1}, {2}, {3}, {}};
    vector<map<char, set<int>>> transitions = {
        {{'a', {1}}},
        {{'a', {2}}},
        {{'b', {3}}},
        {{'b', {}}}
    };
    
    // Alphabet of the NFA
    set<char> alphabet = {'a', 'b'};
    
    // Convert NFA to DFA
    vector<set<int>> dfa = convertNFAtoDFA(nfa, transitions, alphabet);
    
    // Display the DFA states
    cout << "DFA States:" << endl;
    for (int i = 0; i < dfa.size(); ++i) {
        cout << "State " << i << ": ";
        for (int state : dfa[i]) {
            cout << state << " ";
        }
        cout << endl;
    }
    
    return 0;
}
/*
o/p:
DFA States:
State 0: 0 1 2 3 
State 1: 1 2 3 
State 2: 3 
State 3: 2 3 
*/