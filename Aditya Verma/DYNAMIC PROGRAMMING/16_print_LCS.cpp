#include<bits/stdc++.h>
using namespace std;
class Human{
    private : 
    int a = 1;
    public :
    int b = 2;
    protected : 
    int c = 3;
};

class Male : public Human{
    
    public:
    void print(){
        cout<<a<<b<<c;
    }
};
int main(){
    Male obj;
    obj.print();
    return 0;
}