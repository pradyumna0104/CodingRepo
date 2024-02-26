#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) : V(V) {
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void DFSUtil(int u, vector<bool>& visited) {
        visited[u] = true;

        for (int v : adj[u]) {
            if (!visited[v]) {
                DFSUtil(v, visited);
            }
        }
    }

    int edgeConnectivity() {
        int minCut = INT_MAX;
        for (int u = 0; u < V; ++u) {
            for (int v : adj[u]) {
                vector<bool> visited(V, false);
                DFSUtil(u, visited);
                if (!visited[v]) { // If v is not reachable from u, then removing edge u-v disconnects the graph.
                    minCut = min(minCut, 1); // Edge connectivity is at least 1.
                }
            }
        }
        return minCut == INT_MAX ? 0 : minCut;
    }
    int vertexConnectivity() {
        int minCut = INT_MAX;
        for (int u = 0; u < V; ++u) {
            vector<bool> visited(V, false);
            visited[u] = true;
            int count = 0;
            for (int v : adj[u]) {
                if (!visited[v]) {
                    DFSUtil(v, visited);
                    ++count;
                }
            }
            minCut = min(minCut, count);
        }
        return minCut == INT_MAX ? 0 : minCut;
    }
};
int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;
    Graph graph(V);
    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }
    int edgeConnectivity = graph.edgeConnectivity();
    int vertexConnectivity = graph.vertexConnectivity();
    cout << "Edge Connectivity: " << edgeConnectivity << endl;
    cout << "Vertex Connectivity: " << vertexConnectivity << endl;
    return 0;
}
/*
o/p:
Enter the number of vertices and edges: 4 5
Enter the edges (u v):
0 1
1 2
2 3
3 0
0 2
Edge Connectivity: 0
Vertex Connectivity: 1
*/
