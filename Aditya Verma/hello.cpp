// #include<bits/stdc++.h>
// using namespace std;

// void multiply(string a, string b){
//     if(a=="0"||b=="0"){
//         cout<<"0";
//         return;
//     }

//     vector<int> vec(a.size()+b.size(),0);
//     for(int i=a.size()-1;i>=0;i--){
//         for(int j=b.size()-1;j>=0;j--){
//             vec[i+j+1]+=(a[i]-'0')*(b[j]-'0');
//             vec[i+j]+=vec[i+j+1]/10;
//             vec[i+j+1]=vec[i+j+1]%10;
//         }
//     }
//     int i=0;
//     while(i<vec.size()){
//         if(vec[i]>0)break;
//         i++;
//     }
//     string s="";
//     for(int k=i;k<vec.size();k++){
//         s+=(vec[k]+'0');
//     }
// cout<<s<<" ";
// }

// int main(){
//     string a="235";
//     string b="456";
//     multiply(a,b);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
   map<char,int>mp1;
   mp1['l']=2;
   mp1['b']=3;
   map<char,int>mp2;
   mp2['a']=2;
   mp2['b']=3;


    if(mp1==mp2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}


