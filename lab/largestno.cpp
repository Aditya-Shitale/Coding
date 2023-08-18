
#include <bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}


int main()
{
	int arr[] = { 5, 1, 4, 2, 8};
	int N = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, N);

	for (int i = 0; i < N; i++){
		cout << arr[i] << " ";
}
cout<<endl;
cout<<"Enter the index to get largest no. ";
int k;
cin>>k;
if(k<0||k>N){
    cout<<"No. is not valid";
}
else{
cout<<arr[k-1];
}
	return 0;
}

