#include<bits/stdc++.h>
using namespace std;

int main(){
    //Given vector and the sum of subarray
    vector<int> vec={4,1,1,1,2,3,5};
    int k=5;
    //start-end index and sum and maximum size of window intialized
    int i=0,j=0;
    int sum=0;int maxi=0;

    while(j<vec.size()){
        //adding every element in sum
        sum+=vec[j];
        //if sum is less than given k we will continue adding numbers in it
        if(sum<k)j++;
        //if sum equals given k compare the size of current window with maximum and store AND INCREASE LAST (J) INDEX
        else if(sum==k){
            maxi=max(maxi,j-i+1);
            j++;
        }
        //if sum exceeds than k  we will remove element from the start index until it equals or less than k AND INCREASE LAST(J) INDEX
        else{
            while(sum>k){
                sum-=vec[i];
                i++;
            }
            j++;
        }

    }
    cout<<maxi<<" ans";
    return 0;
}