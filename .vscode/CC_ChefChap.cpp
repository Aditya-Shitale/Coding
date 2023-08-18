#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

       int x,y;
       cin>>x>>y;
       if(x*3 > y*2){
           cout<<y*2<<endl;
       }
       else if(x*3 < y*2){
           cout<<x*3<<endl;
       }
       else if(x*3 == y*2){
           cout<<y*2<<endl;
       }
       
    }

    return 0;
}