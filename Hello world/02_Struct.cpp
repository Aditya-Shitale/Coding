#include<bits/stdc++.h>
using namespace std;

struct student
{
    int age;
    string name;
    bool isEnglish;
void details(){
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"isEnglish: "<<isEnglish<<endl;
}
};



int main(){
    student aditya;
    aditya.age=20;
    aditya.name="aditya";
    aditya.isEnglish=0;
    
    student adi={20,"aditya",1}; 

    aditya.details();
    cout<<endl;
    adi.details();
    cout<<endl;

    return 0;
}