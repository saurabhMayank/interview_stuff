#include<bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int> *adj; // pointer to an array containing adjacency list
public:
    Graph(int V);
    
    void addEdge(int v, int w);
    void DFSUtil(int v, bool visited[]);
    void DFS();
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[]) 
{ 
    // Mark the current node as visited and print it 
    visited[v] = true; 
    cout << v << " "; 
  
    // Recur for all the vertices adjacent to this vertex 
    list<int>::iterator i; 
    for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        if(!visited[*i]) // iterator i ki  current value is obtained by *i 
            DFSUtil(*i, visited); 
} 

// two function of DFS made a driver function and a helper function for the DFS
void Graph::DFS() {
    bool *visited = new bool[V];
    for(int i=0; i< V; ++i){
        visited[i] = false; // *(visited + i) && visited[i] are both same.if confusion refer the C book.
    }
    
    for (int i = 0; i < V; ++i) 
        if (visited[i] == false) 
            DFSUtil(i, visited);
}

int main() {
    
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
    
    cout << "Following is Depth First Traversal";
    cout << "\n";
    g.DFS();
	
	return 0;
}
