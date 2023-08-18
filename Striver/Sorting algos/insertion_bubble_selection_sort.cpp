#include<bits/stdc++.h>
using namespace std;

//BEST WORST AND PARTICULAR TC:O(N^2)
void selection_sort(int arr[], int n) {

  // selection sort
  for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

}

//WORST TIME COMPLEXITY O(N^2)   BEST TIME COMPLEXITY O(N) (WHEN ALREADY SORTED)
void bubble_sort(int arr[], int n) {
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {
      int swaps=0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swaps++;
            }
        }
        if(swaps==0)break;
    }

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

//WORST TIME COMPLEXITY O(N^2)   BEST TIME COMPLEXITY O(N) (WHEN ALREADY SORTED)
void insertion_sort(int *arr,int n){

     for(int i=1;i<n;i++){
        int j=i;
        while(j>=1&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main(){
    int arr[7]={14,9,15,12,6,8,13};
    insertion_sort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}