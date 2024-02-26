#include <iostream>
#include <climits>

using namespace std;

const int MAX = 100;

int graph[MAX][MAX];
int V;

void initializeGraph(int vertices) {
    V = vertices;

    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            graph[i][j] = (i == j) ? 0 : INT_MAX;  // Initialize with infinity, except for diagonal elements.
        }
    }
}

void addEdge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;  // Assuming an undirected graph.
}

void floydWarshall() {
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (graph[i][k] != INT_MAX && graph[k][j] != INT_MAX &&
                    graph[i][k] + graph[k][j] < graph[i][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
}

int findEccentricity(int vertex) {
    int eccentricity = 0;

    for (int i = 0; i < V; ++i) {
        if (graph[vertex][i] != INT_MAX && graph[vertex][i] > eccentricity) {
            eccentricity = graph[vertex][i];
        }
    }

    return eccentricity;
}

int findDiameter() {
    int diameter = 0;

    for (int i = 0; i < V; ++i) {
        int eccentricity = findEccentricity(i);
        if (eccentricity > diameter) {
            diameter = eccentricity;
        }
    }

    return diameter;
}

int findRadius() {
    int radius = INT_MAX;

    for (int i = 0; i < V; ++i) {
        int eccentricity = findEccentricity(i);
        if (eccentricity < radius) {
            radius = eccentricity;
        }
    }

    return radius;
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    initializeGraph(vertices);

    cout << "Enter edges (u, v):" << endl;
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }

    floydWarshall();

    cout << "Distance matrix:" << endl;
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    int vertex;
    cout << "Enter the vertex to find eccentricity: ";
    cin >> vertex;

    cout << "Eccentricity of vertex " << vertex << ": " << findEccentricity(vertex) << endl;
    cout << "Diameter of the graph: " << findDiameter() << endl;
    cout << "Radius of the graph: " << findRadius() << endl;

    return 0;
}
/*
o/p:
Enter the number of vertices and edges: 4 6
Enter edges (u, v):
0 1
1 2
2 3
3 0
0 2
1 3
Distance matrix:
0 1 1 1 
1 0 1 1 
1 1 0 1 
1 1 1 0 
Enter the vertex to find eccentricity: 3
Eccentricity of vertex 3: 1
Diameter of the graph: 1
Radius of the graph: 1
*/