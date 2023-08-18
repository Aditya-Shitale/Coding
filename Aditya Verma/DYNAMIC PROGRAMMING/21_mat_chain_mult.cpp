#include<bits/stdc++.h>
using namespace std;
class Human{
    private:
    int a = 1;
    protected:
    int b = 2;
    public:
    int c = 3;
    
    void get(){
        cout<<a<<"\n";
    }
};
class Male: private Human{
    public:
    void print(){
        cout<<" "<< b<<" "<<c<<endl;
        get();
    }
    
};
int main(){
    Male m;
    m.print();
    return 0;
}