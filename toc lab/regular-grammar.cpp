#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Function to generate productions for non-terminal A
vector<string> generateProductionsA() {
    vector<string> productions;
    productions.push_back("aA");
    productions.push_back("");
    return productions;
}

// Function to generate productions for non-terminal B
vector<string> generateProductionsB() {
    vector<string> productions;
    productions.push_back("bB");
    productions.push_back("");
    return productions;
}

int main() {
    // Productions for non-terminal A
    vector<string> productionsA = generateProductionsA();

    // Productions for non-terminal B
    vector<string> productionsB = generateProductionsB();

    // Grammar represented by a map where key is the non-terminal and value is the vector of productions
    map<char, vector<string>> grammar;
    grammar['A'] = productionsA;
    grammar['B'] = productionsB;

    // Starting symbol
    char startSymbol = 'S';

    // Generate the productions for the starting symbol
    vector<string> productionsStart;
    productionsStart.push_back("AB");

    // Add the productions for the starting symbol to the grammar
    grammar[startSymbol] = productionsStart;

    // Display the grammar
    cout << "Regular Grammar Productions:" << endl;
    for (auto it = grammar.begin(); it != grammar.end(); ++it) {
        cout << it->first << " -> ";
        for (int i = 0; i < it->second.size(); ++i) {
            cout << it->second[i];
            if (i < it->second.size() - 1)
                cout << " | ";
        }
        cout << endl;
    }

    return 0;
}
/*
o/p:
Regular Grammar Productions:
A -> aA | 
B -> bB | 
S -> AB 
*/