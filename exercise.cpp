#include<iostream>
using namespace std;

int main(){
    int T,X,Y,Z;
    cin>>T;
    while(T--){
        cin>>X>>Y;
        if (X<Y)
        {
            /* code */
          Z= Y-(Y/X)*(X+1);
        }
        else if (X>=Y)
        {
            Z= Y;
        }
        cout<<Z<<endl;

    }
    return 0;
}






// #include <iostream>
// using namespace std;

// int main()
// {
//     int T, K, N;

//     cin >> T;

//     while (T--)
//     {
//         cin >> N >> K;
//         int A[N], B[N];
//         for (int i = 0; i < N; i++)
//         {
//             /* code */
//             cin >> A[i];
//         }

//         for (int i = 0; i < N; i++)
//         {
           
//             B[i ] = A[(i+K+1)%N ];  
            
//         }
//         for (int i = 0; i < N; i++)
//         {
//             /* code */
//             cout <<" "<< B[i];
//         }
//     }

//     return 0;
// }

//************************question 1********************
//  #include<iostream>
// using namespace std;

// int main(){
//     int George,sally;
//     cout<<"enter value of George  "<<endl;
//     cin>>George;
//     cout<<"enter value of sally  "<<endl;
//     cin>>sally;
//     if (George==sally)
//     {
//         /* code */
//         cout<<"false";
//     }
//     else{
//         cout<<"True"<<endl;
//     }

//     return 0;
// }

// ***************************question 2*********************
//   #include<iostream>
//   using namespace std;

//   int main(){
//       for (int i =100; i < 111; i++) {
//   cout << i <<endl;
// }
//       return 0;
//   }
// ***************************question 3*********************
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 100;

//    // while loop execution
//    while( a < 111 ) {
//       cout << "value of a: " << a << endl;
//       a++;
//    }

//     return 0;
// }
// ***************************question 4*********************
// #include<iostream>
// using namespace std;

// int main(){
//     int i = 100;
// do {
//   cout << i << "\n";
//   i++;
// }
// while (i < 111);
//     return 0;
// }
// ***************************question 5*********************
// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"enter your age: "<<endl;
//     cin>>age;
//      if (age>21)
//      {
//          /* code */
//          cout<<"Yes"<<endl;
//      }

//     return 0;
// }
// ***************************question 6*********************
// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"enter your age: "<<endl;
//     cin>>age;
//      if (age>21)
//      {
//          /* code */
//          cout<<"Yes"<<endl;
//      }
//      else{
//             cout<<"No"<<endl;
//      }

//     return 0;
// }
// ***************************question 8*********************

// #include<iostream>
// using namespace std;

// int main(){
//     char ch,y,n;
//     cout<<"enter a character"
// <<endl;

//     cin>>ch;
//     switch (ch)
//     {
//     case 'y' :
//         /* code */
// cout<<"Yes"<<endl;
//         break;
//         case 'n':
//         /* code */
// cout<<"No"<<endl;
//         break;

//     default:
//     cout<<"Unknown"<<endl;
//         break;
//     }

//     return 0;
// }
// ***************************question 9*********************
// #include<iostream>
// using namespace std;

// int main(){
//     int Speed;
//     cout<<"enter the speed"<<endl;
//     cin>>Speed;
//     if (Speed>55)
//     {
//         /* code */
//         cout<<"ticket=1"<<endl;
//     }
//     else{
//         cout<<"ticket = 0"<<endl;
//     }
//     return 0;
// }
// ***************************question 10*********************
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main(){
//     char string1[20];
//     int i, length;
//     int flag = 0;

//     cout << "Enter a string: "; cin >> string1;

//     length = strlen(string1);

//     for(i=0;i < length ;i++){
//         if(string1[i] != string1[length-i-1]){
//             flag = 1;
//             break;
//    }
// }

//     if (flag) {
//         cout << string1 << " is not a palindrome" << endl;
//     }
//     else {
//         cout << string1 << " is a palindrome" << endl;
//     }
//     system("pause");
//     return 0;
// }