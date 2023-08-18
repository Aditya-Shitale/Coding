#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function object(functor); func wrapped in class so that it available like an object
    int arr[]={1,3,15,48,16,52};
    sort(arr, arr+5);
    for (int i=0; i<6;i++)
{
    cout<<arr[i]<<endl;
}
    return 0;
}