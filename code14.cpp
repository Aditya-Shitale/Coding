#include<iostream>
using namespace std;


// struct employee
// {
//     /* data */
//     int eId;
//     char favchar;
//     float salary;
// };

// int main(){
//     struct employee adi;
//     adi.eId =1;
//     adi.favchar ='c';
//     adi.salary = 1200000;
//     cout<< " the value is "<<adi.eId<<endl;
//      cout<< " the value is "<<adi.favchar<<endl;
//       cout<< " the value is "<<adi.salary<<endl;
// typedef struct employee
// {
//     /* data */
//     int eId;
//     char favchar;
//     float salary;
// } ep;

union money
{
    /* data */
    int rice;
    char car;
    float pound;
} ;
int main(){
    enum Meal{ breakfast,lunch,dinner};
    Meal m1=lunch;
    cout<<m1<<endl;
    // union money m1;
    // m1.rice =34;
    // m1.car= 'c';
    // cout<<m1.car;

    // ep adi;
    // adi.eId =1;
    // adi.favchar ='c';
    // adi.salary = 1200000;
    // cout<< " the value is "<<adi.eId<<endl;
    //  cout<< " the value is "<<adi.favchar<<endl;
    //   cout<< " the value is "<<adi.salary<<endl;
    return 0;
}