#include<bits/stdc++.h>
using namespace std;

//TC:O(N*LOG(N))  SC:o(N)
void merge(int *arr,int low,int mid,int hi){
        vector<int>temp;
        int left=low;
        int right=mid+1;
        while(left<=mid&&right<=hi){
           if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
           }else{
            temp.push_back(arr[right]);
            right++;
           }
        }
        while(left<=mid){temp.push_back(arr[left]);left++;}
        while(right<=hi){temp.push_back(arr[right]);right++;}
        for (int i = low; i <=hi; i++) {
            arr[i]=temp[i-low];
        }
}

void mergeSort(int *arr,int n,int left,int right){
        if(left>=right)return;
        int mid=left+(right-left)/2;
        //sort the first half of array using recursive call
        mergeSort(arr,n,left,mid);
        mergeSort(arr,n,mid+1,right);
        merge(arr,left,mid,right);
}

int main(){
    int arr[7]={14,9,15,12,6,8,13};
    mergeSort(arr,7,0,6);
    cout<<"sorted List: "<<" ";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}