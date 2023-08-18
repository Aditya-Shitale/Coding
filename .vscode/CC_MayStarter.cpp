#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){
    int count=0;
    int arr[]={0,0,0,0,0,0,0,0,0,0};
    int n,z;
     cin>>n;
     int numbers[n];

  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
      cout<<"Number " <<i <<" is " << numbers[i]<<endl;
      }

      if(numbers[n]==1){
        arr[0]=arr[0]+1;
      }
      if(numbers[n]==2){
        arr[1]=arr[1]+1;
      }
      if(numbers[n]==3){
        arr[2]=arr[2]+1;
      }
      if(numbers[n]==4){
        arr[3]=arr[3]+1;
      }
      if(numbers[n]==5){
        arr[4]=arr[4]+1;
      }
      if(numbers[n]==6){
        arr[5]=arr[5]+1;
      }
      if(numbers[n]==7){
        arr[6]=arr[6]+1;
      }
      if(numbers[n]==8){
        arr[7]=arr[7]+1;
      }
      if(numbers[n]==9){
        arr[8]=arr[8]+1;
      }
      if(numbers[n]==10){
        arr[9]=arr[9]+1;
      }

 for (int k = 0; k < 10; ++k) {
    cout<<arr[k]<<" ";
      
      }
      



  
 

  }
  return 0;
}




// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//        int x,y,z,t;
//        cin>>x>>y>>z;
//      t=(z-y)/x;
//      cout<<t<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         if( x > y || x == y){
//             printf("YES \n");

//         }
//      else if (x<y){
//               printf("NO \n");

//         }
//     }
//     return 0;
// }