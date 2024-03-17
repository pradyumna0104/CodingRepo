#include <bits/stdc++.h>
using namespace std;

// Function to convert Moore machine to Mealy machine
pair<vector<map<char, pair<int, char>>>, int> convertMooreToMealy(const vector<vector<int>>& transitions, const vector<char>& inputs, const vector<int>& outputs) {
    int numStates = transitions.size();
    vector<map<char, pair<int, char>>> mealyTransitions(numStates);
    int initialState = 0; // Initial state for Mealy machine

    // Iterate over each state
    for (int state = 0; state < numStates; ++state) {
        // Iterate over each input symbol
        for (int symbol = 0; symbol < inputs.size(); ++symbol) {
            char input = inputs[symbol];
            int nextState = transitions[state][symbol];
            char output = outputs[nextState]; // Output is based on the next state
            // Update the transition and output for Mealy machine
            mealyTransitions[state][input] = {nextState, output};
        }
    }
    
    return make_pair(mealyTransitions, initialState);
}

// Function to display Mealy machine
void displayMealy(const vector<map<char, pair<int, char>>>& transitions, const int initialState) {
    cout << "Mealy Machine:" << endl;
    int numStates = transitions.size();
    for (int state = 0; state < numStates; ++state) {
        cout << "State " << state << ":" << endl;
        for (auto& transition : transitions[state]) {
            cout << "\tOn input '" << transition.first << "' transition to State " << transition.second.first << " with output '" << transition.second.second << "'" << endl;
        }
    }
    cout << "Initial State: " << initialState << endl;
}

int main() {
    // Example Moore machine transitions
    vector<vector<int>> mooreTransitions = {{1, 0}, {0, 1}};

    // Example Moore machine inputs
    vector<char> inputs = {'a', 'b'};

    // Example Moore machine outputs
    vector<int> outputs = {0, 1};

    // Convert Moore to Mealy
    auto mealyInfo = convertMooreToMealy(mooreTransitions, inputs, outputs);
    auto mealyTransitions = mealyInfo.first;
    int initialState = mealyInfo.second;

    // Display Mealy machine
    displayMealy(mealyTransitions, initialState);

    return 0;
}
/*
o/p:
Mealy Machine:
State 0:
    On input 'a' transition to State 1 with output '0'
    On input 'b' transition to State 0 with output '1'
State 1:
    On input 'a' transition to State 0 with output '0'
    On input 'b' transition to State 1 with output '1'
Initial State: 0
*/
