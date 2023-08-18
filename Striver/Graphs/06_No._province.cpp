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



    void dfs(int node,vector<int>list[],vector<int>&vis){
        //mark node as visited
        vis[node]=1;
        //run a  loop over all neighbouring elements of a particular node and make dfs call if not visited
        for(int i=0;i<list[node].size();i++){
            if(vis[list[node][i]]!=1){
                dfs(list[node][i],list,vis);
            }
        }
    }  
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        //converting adjancency matrix to adjacency list
        vector<int>list[V];
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[0].size();j++){
                if(adj[i][j]==1&&i!=j){
                    list[i].push_back(j);
                    list[j].push_back(i);
                }
            }
        }
        //create a visited array
        vector<int>vis(V,0);
        int cnt=0; //count of provinces
        for(int i=0;i<V;i++){
            if(vis[i]!=1){
                cnt++;
                dfs(i,list,vis);
            }
        }
        return cnt;
        
    }

int main(){
    file();
    int m;
    vector<vector<int>>mat;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            int p;
            cin>>p;
            mat[i][j]=p;
        }
    }
int t;
 cout<<numProvinces(mat,m);
    return 0;
   
}