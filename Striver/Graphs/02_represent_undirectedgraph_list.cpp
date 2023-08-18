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
//LIST IS MORE OPTIMAL MORE TO STORE A GRAPH THAN MATRIX METHOD
//SPace we will be taking is O(2*E) IN UNDIRECTED GRAPH
int main(){
    file();
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
         adj[u].push_back(v);
         adj[v].push_back(u);
    }
    return 0;
}