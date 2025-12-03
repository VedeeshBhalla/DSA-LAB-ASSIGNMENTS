#include <iostream>
using namespace std;

class Graph {
    int n;
    int **adj;

public:
    Graph(int v) {
        n = v;
        adj = new int*[n];
        for(int i = 0; i < n; i++) {
            adj[i] = new int[n];
            for(int j = 0; j < n; j++)
                adj[i][j] = 0;
        }
    }

    void addDirectedEdge(int src, int dest) {
        adj[src][dest] = 1;
    }

    void addUndirectedEdge(int src, int dest) {
        adj[src][dest] = 1;
        adj[dest][src] = 1;
    }

    void showMatrix() {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                cout << adj[i][j] << " ";
            cout << endl;
        }
    }

    void showEdges() {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) 
                if(adj[i][j] == 1)
                    cout << i << " -> " << j << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter 1 for directed graph, 0 for undirected: ";
    int d;
    cin >> d;
    bool directed = d;

    Graph g(n);

    cout << "Enter src and dest (enter -1 -1 to stop):\n";
    while(true) {
        int src, dest;
        cin >> src >> dest;

        if(src == -1 && dest == -1)
            break;

        if(src >= 0 && dest >= 0 && src < n && dest < n) {
            if(directed)
                g.addDirectedEdge(src, dest);
            else
                g.addUndirectedEdge(src, dest);
        }
    }

    cout << "\nAdjacency Matrix:\n";
    g.showMatrix();

    cout << "\nEdges:\n";
    g.showEdges();

    return 0;
}
