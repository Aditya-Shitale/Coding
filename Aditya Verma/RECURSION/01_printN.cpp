#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    print(n-1);
    cout<<n<<" ";
}
void rprint(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    rprint(n-1);
}

int main(){
    int n;
    cin>>n;
    print(n);
    cout<<endl;
    rprint(n);
    return 0;
}

/****************************My Method**************************************/

// #include<bits/stdc++.h>
// using namespace std;
// void printn(int n){
//     if(n==0)return;
//     cout<<n<<" ";
//     printn(n-1);
// }
// void rprintn(int n,int i){
//     if(i>n)return;
//     cout<<i<<" ";
//     rprintn(n,i+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     printn(n);
//     cout<<endl;
//     rprintn(n,1);
//     return 0;
// }