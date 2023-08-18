/*
LONGEST COMMON SUBSEQUENCE

*/

#include<bits/stdc++.h>
using namespace std;

int Lcs(string x,string y,int xs,int ys){
    //Base condition we length of any of string is zero then there will be no existing LCS
    if(xs==0||ys==0){
        return 0;
    }
    //CHOICE DIAGRAM
    //IF ANY TWO CHARACTERS MATCHES THEN ADD 1 TO LCS AND RETURN THE REMAING STRING FOR RECURSION
    if(x[xs-1]==y[ys-1]){
        return 1+Lcs(x,y,xs-1,ys-1);
    }
    //IF TWO CHARACTERS DOES NOT MATCH THEN WE NEED TO TAKE TWO CHOICE LEAVE ONE CHARACTER OF ONE STRING AND TAKE WHOLE OF OTHER AND VICE VERSA
    else{
        return max(Lcs(x,y,xs-1,ys),Lcs(x,y,xs,ys-1));
    }
}

int main(){
     string x="abcdgh";
     string y="abedfhr";
     //abdh is longest common substring OUTPUT WILL BE 4
      cout<<Lcs(x,y,x.size(),y.size());
    return 0;
}