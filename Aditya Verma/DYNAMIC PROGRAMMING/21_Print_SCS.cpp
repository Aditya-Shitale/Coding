#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="bbbaaaba";
    string b="bbababbb";
    //output "acbcdaf"
    int as=a.size();
    int bs=b.size();
    vector<vector<int>>dp(as+1,vector<int>(bs+1));
    for(int i=0;i<as+1;i++)dp[i][0]=0;
    for(int j=0;j<bs+1;j++)dp[0][j]=0;

    for(int i=1;i<as+1;i++){
        for(int j=1;j<bs+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<a.size()+b.size()-dp[a.size()][b.size()];

    string str="";
    while(as>0&&bs>0){
        if(a[as-1]==b[bs-1]){
            str+=a[as-1];
            as--;bs--;
        }
        else{
            //IF CHARACTERS DOES NOT MATCH STILL  WE WILL ADD THEM
           if(dp[as-1][bs]>dp[as][bs-1]){
            str+=a[as-1];
                as--;
           }
           else{
            str+=b[bs-1];
            bs--;
           }
        }
    }
    //FROM ABOVE CASE THERE IS POSSIBILITY THAT ONLY ONE OF TWO BECAME ZERO HENCE WE NEED TO ADD ALL HENCE FOLLOWING
    while(as>0){str+=a[as-1];as--;}
    while(bs>0){str+=b[bs-1];bs--;}
    reverse(str.begin(),str.end());
    cout<<"Shortest common supersequence for given strings will be ===> "<<str<<endl;
    return 0;
}