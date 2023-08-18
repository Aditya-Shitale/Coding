#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int z=0;z<n;z++){
        scanf("%d %d",&arr[z][0],&arr[z][1]);
    }

    int nq;
    scanf("%d",&nq);
    int query[nq];
    for(int z=0;z<nq;z++){
        scanf("%d",&query[z]);
    }
    int ans=0;
    for(int z=0;z<nq;z++){
        for(int y=0;y<n;y++){
            if(arr[y][0] <= query[z] && query[z] <= arr[y][1]){
                ans++;
            }
        }
    }
    printf("%d",ans);
}