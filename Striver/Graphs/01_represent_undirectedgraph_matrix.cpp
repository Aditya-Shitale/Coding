#include<bits/stdc++.h>
using namespace std;
void file()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
}
int main(){
    file();
    int n,m;
    //NO. OF NODES AND EDGES WILL BE FIRST LINE OF INPUT
    cin>>n>>m;
    //NEXT M LINES OF INPUT WHICH WILL REPRESENT EDGES BETWEEN NODES
    //WE WILL STORE THIS IN MATRIX SPACE(N*N)
    vector<vector<int>>adj=vector<vector<int>>(n+1,vector<int>(n+1,0));
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //IF IT IS A WEIGHTED GRAPH WE WILL EQUAL IT WITH THE WEIGHT PROVIDED IN INPUT MOT 1
        adj[u][v]=1;
        adj[v][u]=1;
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}