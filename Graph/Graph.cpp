#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    
    public:

    unordered_map<int,list<int>> adj;

    void addEdge(int u,int v,int direction){
        //direction =0 ->undirected
        //direction =1 ->directed 

        //create an edge from u to v
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }

    }
    void print(){
        for(auto i: adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};

int main(){
    graph *g=new graph();
    g->addEdge(1,2,0);
    g->addEdge(3,2,0);
    g->print();

    return 0;
}