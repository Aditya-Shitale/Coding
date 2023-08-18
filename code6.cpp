//system header file
#include<iostream>
//user defined header file
//#include "this.h"


using namespace std;

int main(){
    int a=4, b=5;
    cout<<"operators in c++\n";
    cout<<"Following are the types of operators in c++\n";
    //Arithmatic operators
     cout<<"\nThe value of a + b is "<< a+b;
     cout<<"\nThe value of a - b is "<<a-b;
     cout<<"\nThe value of a * b is  "<<a*b;
     cout<<"\nThe value of a / b is "<<a/b;
     cout<<"\nThe value of a % b is "<<a%b;
     cout<<"\nThe value of a ++  is "<<a++;
     cout<<"\nThe value of a --  is \n"<<a--;
     //Assignment operators
    //int a=9,b=3;
      // comparison operators
       cout<<"\nFollowing are the types of comparisonoperators in c++\n";
      cout<<"\n The value of a == b is"<<(a==b);
      cout<<"\n The value of a != b is"<<(a!=b);
      cout<<"\n The value of a >= b is"<<(a>=b);
      cout<<"\n The value of a <= b is"<<(a<=b);
      cout<<"\n The value of a > b is"<<(a>b);
      cout<<"\n The value of a < b is"<<(a<b);

       cout<<"\nFollowing are the types of logical operators in c++\n";
      cout<<"\n The value of this logical and opeartor is :((a == b) && (a<b)) logical operator is "<<((a==b) && (a<b));

      cout<<"\n The value of this logical and opeartor is :((a == b) || (a<b)) logical operator is "<<((a==b) || (a<b));

      cout<<"\n The value of this logical and opeartor is :(!(a == b)) logical operator is "<<!(a==b);

    return 0;
}