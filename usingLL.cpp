#include<bits/stdc++.h>
using namespace std;
class graph{

    public:
    unordered_map<int , list<int>> adj;

    void addEdge(int src, int des, bool direction){
        if(direction){
            adj[src].push_back(des);
        }
        else{
            adj[src].push_back(des);
            adj[des].push_back(src);
        }
    }

    void show(){
        for(auto vertice : adj){
            for(auto edge : vertice.second){
                cout << vertice.first << " -> " <<edge <<endl;
            }  
        }
    }

    void BFS(int start, unordered_map<int,bool> &visited){
        queue<int> q;

        q.push(start);
        visited[start] = true;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            cout << node << " ";

            for(int neighbour : adj[node]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
    }

    void DFS(int node, unordered_map<int,bool> &visited){
        visited[node] = true;
        cout << node << " ";

        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
            DFS(neighbour, visited);
            }
        }
    }
};

int main(){

    int n;
    cout << "Enter number of vertices : ";
    cin >> n;

    int m;
    cout << "Enter number of edges : ";
    cin >> m;

    graph g;
    bool direction;
    cout << "Directed ? : ";
    cin >> direction;

    for(int i=0 ; i<m ; i++){
        int src,des ;
        cin >> src >> des;
        g.addEdge(src,des,direction);
    }
    g.show();

    int startNode;
    cout << "Enter starting Node : ";
    cin >> startNode;

    unordered_map<int , bool> visited;
    for(int i=0 ; i<n ; i++){
        visited[i] = false;
    }

    cout << "BFS TRAVERSAL " <<endl;
    g.BFS(startNode, visited);

    // Reset visited for DFS
    for(int i=0 ; i<n ; i++){
        visited[i] = false;
    }   

    int startNodeDFS;
    cout << "\nEnter starting node for DFS: ";
    cin >> startNodeDFS;

    cout << "DFS Traversal: ";
    g.DFS(startNodeDFS, visited);
    return 0;
}