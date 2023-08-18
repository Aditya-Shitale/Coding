#include<bits/stdc++.h>
using namespace std;

    void insert(vector<int>&vec,int val){
        if(vec.size()==0||vec[vec.size()-1]<=val){
            // cout<<val<<" val"<<endl;
            vec.push_back(val);
            return;
        }
        int ret=vec[vec.size()-1];
        vec.pop_back();
        // cout<<ret<<" ret"<<endl;
        insert(vec,val);
        vec.push_back(ret);
        return;
    }

    void sort(vector<int> &vec){
        if(vec.size()==1){
            return;
        }
        int temp=vec[vec.size()-1];
        // cout<<temp<<" ";
        vec.pop_back();
        sort(vec);
        insert(vec,temp);

    }
/* ********************************** Youtube Comment Solution*****************************/
// void arraySort(vector<int> &arr, int n, int i){
//     // base condition
//     if(i == n-1){
//         return ;
//     }

//     // hypothesis
//     arraySort(arr, n, i+=1);                // O(n)

//     // induction
//     if(arr[i-1] > arr[i])
//         swap(arr[i], arr[i-1]);

//     // hypothesis
//     arraySort(arr, n, i);                   // O(n)
// }


int main(){
    vector<int> vec={5,4,1,3,8,6,7,2,0,5};
    cout<<"vector before sort: ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    // arraySort(vec,vec.size(),0);
    sort(vec);
    cout<<"vector After sort: ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}



 
