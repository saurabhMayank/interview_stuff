#include<bits/stdc++.h> 
using namespace std;

class Graph { 
    int V;    // No. of vertices 
    list<int> *adj;    // Pointer to an array containing adjacency lists 
    bool isCycleUtil(int v, bool *visited, bool *recStack);
public: 
    Graph(int V);   // Constructor 
    void addEdge(int v, int w);   // to add an edge to graph 
    bool dfs();
}; 
Graph::Graph(int V) { 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) { 
    adj[v].push_back(w); // Add w to v’s list. 
} 

bool Graph::isCycleUtil(int v , bool *visited, bool *recStack) {
    if(!visited[v]){
        visited[v] = true;
        recStack[v] = true;
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i) {
            // if(recStack[*i] == true){
            //     return true;
            // }else if(!visited[*i] && !recStack[*i]){
            //     isCycleUtil(*i,visited,recStack);
            // }
            // My logic is wrong 
            // have to understand the logic below in the if else condition
            if (!visited[*i] && isCycleUtil(*i, visited, recStack)) 
				return true; 
			else if (recStack[*i]) 
				return true;
        }
    }
    recStack[v] = false; // all the child nodes of this vertex are visited and this vertex is not involved in the cycle.
    return false;// this particular vertex cannot be involved in a cycle.
    
}

bool Graph::dfs(){
    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    
    for(int i = 0; i < V; i++) { 
        visited[i] = false; 
        recStack[i] = false; 
    } 
    
    for(int i = 0; i < V; ++i){
        if(isCycleUtil(i, visited,recStack)){
            return true;
        }
    }
    return false;
} 

int main() {
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    // g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    // g.addEdge(3, 3); 
  
    if(g.dfs()) 
        cout << "Graph contains cycle"; 
    else
        cout << "Graph doesn't contain cycle"; 
    
	return 0;
}
