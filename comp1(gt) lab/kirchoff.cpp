#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to calculate the determinant of a matrix
double determinant(vector<vector<double>>& mat) {
    int n = mat.size();
    double det = 1.0;

    // Applying Gaussian elimination
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double factor = mat[j][i] / mat[i][i];
            for (int k = i; k < n; ++k) {
                mat[j][k] -= factor * mat[i][k];
            }
        }
        det *= mat[i][i]; // Multiply along diagonal
    }

    return det;
}

// Function to find the number of spanning trees using Kirchhoff's theorem
int kirchhoff(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<vector<double>> laplacian(n, vector<double>(n, 0.0));

    // Constructing the Laplacian matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                laplacian[i][j] = graph[i].size();
            } else {
                // Search for j in graph[i]
                bool found = false;
                int x = graph[i].size(); 
                for (int k = 0; k < x; ++k) {
                    if (graph[i][k] == j) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    laplacian[i][j] = -1;
                }
            }
        }
    }

    // Calculate determinant of any cofactor of the Laplacian matrix
    vector<vector<double>> minor(n - 1, vector<double>(n - 1, 0.0));
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            minor[i - 1][j - 1] = laplacian[i][j];
        }
    }

    return round(determinant(minor));
}

// Function to find the number of spanning trees in a complete graph using Cayley's formula
int cayley(int n) {
    return pow(n, n - 2);
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    vector<vector<int>> graph(vertices);

    cout << "Enter the edges (vertex1 vertex2):" << endl;
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Undirected graph
    }

    if (edges == vertices * (vertices - 1) / 2) { // Complete graph
        cout << "The graph is a complete graph." << endl;
        cout << "Number of spanning trees: " << cayley(vertices) << endl;
    } else {
        cout << "The graph is not a complete graph." << endl;
        cout << "Number of spanning trees: " << kirchhoff(graph) << endl;
    }

    return 0;
}
/*
o/p:
Enter the number of vertices and edges: 4 6
Enter the edges (vertex1 vertex2):
0 1
1 2
2 3
3 0
0 2
1 3
The graph is a complete graph.
Number of spanning trees: 16
*/