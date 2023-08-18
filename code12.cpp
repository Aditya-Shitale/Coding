#include<iostream>
using namespace std;

int main(){
    //what is a pointer??-----> data type which holds the address of other data types
     int a=3;
     int* b = &a;
     //&-------->address of operator
     cout<<b<<endl;
     cout<<&a<<endl;

     //* ----->(value at) dereference operator
     cout<<"the value at address b is "<<*&a<<endl;
     cout<<"the value at address b is "<<*b<<endl;
     
     //pointer to pointer
     int** c=&b;
     cout<<c<<endl;
     cout<<&b<<endl;
     cout<<*c<<endl;
     cout<<**c<<endl;
        return 0;
}