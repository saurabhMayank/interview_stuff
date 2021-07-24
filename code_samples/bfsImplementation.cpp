#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph {
    int V;
    list<int> *adj; // pointer pointing to an array containing adjacency list
public:
    Graph(int V); // constructor to initialize the Graph
        
    void addEdge(int v, int w); // constructor to add a node and its adjacent vertices 
   
    void BFS(int s);  // prints BFS traversal from a given source s 
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v,int w) {
    adj[v].push_back(w); // add w to v's list
}
 
void Graph::BFS(int s){
    bool *visited = new bool[V]; // bbolean pointer pointing to visited array
    for (int i = 0; i < V; ++i){
        visited[i] = false;
    }
    
    queue<int> q;
    
    visited[s] = true;
    q.push(s);
    
    list<int>::iterator i;
    
    while(!q.empty()){
        int v = q.front();
        cout << v << " ";
        q.pop();
        
        for(i = adj[v].begin();i != adj[v].end(); ++i){
            if(!visited[*i]){
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
} 
 
int main() {
    
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3);
    
    cout << "BFS will be printed starting from vertex 2";
    cout << "\n";
    g.BFS(2);
	
	return 0;
}
