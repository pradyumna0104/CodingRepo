#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Hypercube {
    int dimension;
    int totalVertices;
    int totalEdges;
    vector<vector<int>> adjacencyList;
public:
    Hypercube(int dim) : dimension(dim) {
        totalVertices = 1 << dim; // 2^dimension
        totalEdges = dim * totalVertices / 2; // Each vertex has 'dim' edges and each edge is counted twice.
        adjacencyList.resize(totalVertices);
        generateAdjacencyList();
    }
    void generateAdjacencyList() {
        for (int i = 0; i < totalVertices; ++i) {
            for (int j = 0; j < dimension; ++j) {
                int adjacentVertex = i ^ (1 << j); // Toggle the j-th bit to get the adjacent vertex.
                adjacencyList[i].push_back(adjacentVertex);
            }
        }
    }
    int getTotalVertices() {
        return totalVertices;
    }
    int getTotalEdges() {
        return totalEdges;
    }
    vector<vector<int>> getAdjacencyList() {
        return adjacencyList;
    }
};
int main() {
    int dimension;
    cout << "Enter the dimension of the hypercube: ";
    cin >> dimension;
    Hypercube hypercube(dimension);
    int totalVertices = hypercube.getTotalVertices();
    int totalEdges = hypercube.getTotalEdges();
    vector<vector<int>> adjacencyList = hypercube.getAdjacencyList();
    cout << "Total number of vertices: " << totalVertices << endl;
    cout << "Total number of edges: " << totalEdges << endl;
    cout << "Adjacency List:\n";
    for (int i = 0; i < totalVertices; ++i) {
        cout << "Adjacent to vertex " << i << ": ";
        for (int j : adjacencyList[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
o/p:
Enter the dimension of the hypercube: 3
Total number of vertices: 8
Total number of edges: 12
Adjacency List:
Adjacent to vertex 0: 1 2 4 
Adjacent to vertex 1: 0 3 5 
Adjacent to vertex 2: 3 0 6 
Adjacent to vertex 3: 2 1 7 
Adjacent to vertex 4: 5 6 0 
Adjacent to vertex 5: 4 7 1 
Adjacent to vertex 6: 7 4 2 
Adjacent to vertex 7: 6 5 3 
*/