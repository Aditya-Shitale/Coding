
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
   int x,z,p;
   cin >> x;
   if(x%2==0){

   p= ((x-1)/2)*3;

   }
   else{
   p= (x/2)*3;

   }
   z=((x-1)*3)-p;
 cout<<z;



    }
    return 0;
}






// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
// int x,y;
// cin>>x>>y;

// if(x*100 < y*10){
//     printf("Disposable \n");
// }
// if(x*100 > y*10){
//     printf("Cloth \n");
// }
// if(x*100 == y*10){
//     printf("Cloth \n");
// }


//     }
//     return 0;
// }







// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
// int x,y,z;
// cin>>x>>y>>z;

// if(x<z && x+y > z){
//     printf("1 \n");
// }
// else if(x+y < z || x+y == z){
//     printf("2 \n");

// }
// else if(x>z){
//     printf("0 \n");
// }


//     }
//     return 0;
// }