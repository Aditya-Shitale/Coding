#include<bits/stdc++.h>
using namespace std;

int solve(int e,int f){
    //IF WE HAVE ONLY ONE EGG THEN WE NEED TO CHECK ONE BY ONE FROM BOTTOM FLOOR TO TOP FLOOR
    //IF WE HAVE 0 OR 1 FLOOR THEN THERE WILL BE ZERO OR 1 ATTEMPT REQUIRED
    if(e==1||f==0||f==1)return f;
    //Break in k loop
    //BASICALLY THERE ARE TWO CASES ===>CASE1:IF MY EGG BREAKS I NEED TO CHECK BELOW FLOORS AND ONE OF MY EGG DESTROYED THAT IS SOLVE(E-1,K-1)
    //===>CASE 2: IF MY EGG DOES NOT BREAK THERE IS NO NEED TO CHECK BELOW AND MY EGG IS ALSO SAVED HENCE SOLVE(E,F-K)
    int mini=INT_MAX;
    for(int k=1;k<=f;k++){
        //WE ADDED ONE BECAUSE WE TOOK ONE ATTEMPT OF EGG DROP
        //WE ARE TAKING MAX OF BOTH CASE BECAUSE WE WANT TO DEAL WITH WORST CASE SCENARIO
        int temp=1+max(solve(e-1,k),solve(e,f-k));
        mini=min(temp,mini);
    }
return mini;

}

int main(){
    int egg=3;
    int floor=5;
    cout<<solve(egg,floor);
    return 0;
}