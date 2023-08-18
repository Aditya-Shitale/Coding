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
//SPace we will be taking is O(E) in DIRECTED GRAPH
int main(){
    file();
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    //u--->v
    for(int i=0;i<m;i++){
        int u,v;
        //IF GIVEN GRAPH IS WEIGTED GRAPH THEN WE WILL USE PAIR TO STORE IT
        //FIRST ELEMENT WILL BE THE NEIGHBOUR AND SECOND ELEMENT WILL BE THE WEIGHT BETWEEN THODE TWO 
         adj[u].push_back(v);
        
    }
    return 0;
}

/*
5 6
2 1
1 3
2 4
3 4
2 5
4 5
*/