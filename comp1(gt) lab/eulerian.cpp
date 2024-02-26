#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph {
private:
    int V;
    vector<list<int>> adjList;

public:
    Graph(int vertices) : V(vertices), adjList(vertices) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool isConnected();

    bool isEulerian();

    void DFS(int v, vector<bool>& visited);
};

bool Graph::isConnected() {
    vector<bool> visited(V, false);

    // Find a vertex with non-zero degree to start DFS
    int i;
    for (i = 0; i < V; ++i)
        if (adjList[i].size() > 0)
            break;

    // If there are no edges in the graph, it's connected by definition
    if (i == V)
        return true;

    DFS(i, visited);

    // Check if all non-zero degree vertices are visited
    for (int j = 0; j < V; ++j)
        if (!visited[j] && adjList[j].size() > 0)
            return false;

    return true;
}

void Graph::DFS(int v, vector<bool>& visited) {
    visited[v] = true;

    for (int neighbor : adjList[v])
        if (!visited[neighbor])
            DFS(neighbor, visited);
}

bool Graph::isEulerian() {
    if (!isConnected())
        return false;

    // Count vertices with odd degree
    int oddDegreeVertices = 0;
    for (int i = 0; i < V; ++i)
        if (adjList[i].size() % 2 != 0)
            ++oddDegreeVertices;

    // If there are more than 2 vertices with odd degree, the graph can't be Eulerian
    return (oddDegreeVertices == 0 || oddDegreeVertices == 2);
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    Graph graph(vertices);

    cout << "Enter edges (u, v):" << endl;
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    if (graph.isEulerian())
        cout << "The graph is Eulerian.\n";
    else
        cout << "The graph is not Eulerian.\n";

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
The graph is not Eulerian.
*/