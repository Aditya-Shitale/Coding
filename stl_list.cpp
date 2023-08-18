#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst) {
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end();it++){
        cout<<*it<<" "<<endl;
    }
}

int main(){
    list<int> list1;// list of 0 length
    list<int> list2(7); //empty list of size 7
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(6);
    list1.push_back(12);

    display(list1);

    // list<int> :: iterator iter;
    // iter =list1.begin();

    // cout<< *iter<<" ";
    // iter++;
    
        return 0;
}