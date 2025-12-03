#include<bits/stdc++.h>
using namespace std;
int findParent(int v, vector<int>& parent){
    if(parent[v]==v){
        return v;
    }
    return parent[v] = findParent(parent[v], parent);
}
int main(){

    cout << "No of Vertices : ";
    int V;
    cin >>V;
    cout << "No of Edges : ";
    int e;
    cin >> e;
    map<pair<int , int>, int> edges;
    for(int i=0 ; i<e ; i++){
        int u, v, w;
        cin >> u >> v >> w;
        edges[{u,v}] = w;
    }
    vector<pair<int, pair<int,int>>>sortEdge;
    
    for(auto &e : edges){
        sortEdge.push_back({e.second,{e.first.first,e.first.second}});
    }

    sort(sortEdge.begin(),sortEdge.end());

    vector<int> parent(V);
    vector<int> rank(V,0);

    for(int i=0 ; i<V ; i++) parent[i] = i;

    int count = 0;

    for(auto &e : sortEdge){
        int w = e.first;
        int u = e.second.first;
        int v = e.second.second;
        if(findParent(u)!=findParent(v)){

        }
    }



    return 0;
}