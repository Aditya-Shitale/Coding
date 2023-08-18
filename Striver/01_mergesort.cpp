#include<bits/stdc++.h>
using namespace std;

    void merge(vector<int>&arr,int hi,int lo,int mid){
        vector<int>ans;
        int left=lo;
        int right=mid+1;
        while(left<=mid&&right<=hi){
            if(arr[left]>arr[right]){
                ans.push_back(arr[right]);
                right++;
            }
            else{
                ans.push_back(arr[left]);
                left++;
            }
        }
        while(left<=mid){ans.push_back(arr[left]);left++;}
        while(right<=hi){ans.push_back(arr[right]);right++;}
        for(int i=lo;i<=hi;i++){
            arr[i]=ans[i-lo];
        }
    }
 void mergeSort(vector<int>&arr,int lo,int hi){
        if(lo>=hi)return ;
        int mid=(lo+hi)/2;
        mergeSort(arr,lo,mid);
        mergeSort(arr,mid+1,hi);
        merge(arr,hi,lo,mid);
 }

int main(){
    vector<int>arr={3,2,1,4,2,3};
    int lo=0;
    int hi=arr.size()-1;
    mergeSort(arr,lo,hi);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}