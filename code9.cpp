#include<iostream>
using namespace std;
int main(){  
    int age;
    cout<<" Tell me your age"<<endl;
    cin>>age;
    //*********selection control structure; if else ladder
    // if(age<18){
    //     cout<<"You can not come to my party"<<endl;

    // }
    // else if(age==18){
    //     cout<<"you are a kid "<<endl;
    // }
    // else{
    //     cout<<"you can come"<<endl;
    // }
    // *********selection control structure:switch case
    switch (age)

    {
    case 18:
        /* code */
        cout<<"you are 18"<<endl;
        break;
        case 22:
        /* code */
        cout<<"you are 22"<<endl;
        break;
         case 2:
        /* code */
        cout<<"you are 2"<<endl;
        break;
    
    default:
    cout<<"no special cases"<<endl;
        break;
    }
    
     return 0;
     }