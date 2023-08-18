#include<bits/stdc++.h>
using namespace std;

int main(){
    int k=10;
    int *ptr; //address of var
    ptr=&k;
    cout<<ptr<<endl;
    cout<<*ptr<<endl<<endl;


//int *ptr ====int* ptr==== int*ptr
    int **ptr1;//address of address

    ptr1=&ptr;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr1<<endl;



    return 0;
}