#include<iostream>
using namespace std;

// int sum(int a,int b){
//     int c = a+b;
//     return c;
// }
//*****this will not swap a and b***********
// void swap(int a,int b){
//     int temp=a;
//       a=b;
//        b=temp;

// }

//**************CALL BY REFERENCE USING POINTER************

// void swapPointer(int* a,int* b){
//     int temp=*a;
//       *a=*b;
//        *b=temp;

// }

void swapreferenceVar(int &a,int &b){
    int temp= a;
      a=b;
       b=temp;

}

int main(){
    int x=4,y=5;
    // cout<<x<<endl<<y<<endl;
    // swapPointer(&x,&y);
    //   cout<<x<<endl<<y<<endl;
    cout<<x<<endl<<y<<endl;
    swapreferenceVar(x,y);
    cout<<x<<endl<<y<<endl;
    
    return 0;
}