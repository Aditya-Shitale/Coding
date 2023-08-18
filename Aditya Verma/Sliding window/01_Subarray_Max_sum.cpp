#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec={2,3,5,2,9,7,1}; //given vector
    int WindowSize=3;  
    int start=0,end=0;  //intialize startand end pointer
    int sum=0; //for every window sum
     int maxi=INT_MIN;//for max sum
    while(end<vec.size()){
            sum+=vec[end]; //we will add every number to our sum
        if(end-start+1<WindowSize) //only increase end index till we reach our given windowsize
          {
            end++;
          }
        else if(end-start+1==WindowSize) //once we reach given window size increase index of start and end both
          {
            maxi=max(sum,maxi); //check max sum
            sum=sum-vec[start]; //every time window slides before sliding minus the start index number from the sum
            start++;
            end++;
          }

    }
    cout<<maxi<<" max sum";
    return 0;
}





//NAIVE SOLUTIon
/*****************************My Solution**********************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> vec={2,3,5,2,9,7,1};
//     int s=0;
//     int e=2;
//     int maxi=INT_MIN;
//     int sum=2+3+5;
//     while(e+1<vec.size()){
//         sum=sum-vec[s]+vec[e+1];
//         maxi=max(maxi,sum);
//          s++;e++;
       
//     }
//     cout<<endl;
//     cout<<maxi<<" ans";
//     return 0;
// }