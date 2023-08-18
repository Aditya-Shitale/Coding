// #include<iostream>
// using namespace std;
//   int factorial(int a){
//       if(a<=1){
//           return 1;
//       }
//       return a * factorial(a-1);
//   }

// int main(){
//     int a;
//     cout<<"enter a number  "<<a<<endl;
//     cin>>a;
//     cout<<"factorial of "<<a<<" is "<<factorial(a);

//         return 0;
// }
#include<iostream>
using namespace std;

int fibo(int a){
    if(a<2){
        return 1;
    }
    return fibo(a-2) + fibo(a-1);
}

int main(){
    int a;
    cout<<"fibonacci"<<a<<endl;
    cin>>a;
    cout<<"term at fibonacci "<<a<<" is "<<fibo(a);
    return 0; 
}