#include<iostream>
using namespace std;

template <class T>
class Adi
{
public:
    T data;
    Adi(T a)
    {
        data = a;
    }
     void display();
    // {
    //     cout << data;
    // }
};
template <class T>
 void Adi<T>:: display()
    {
        cout << data;
    }


int main(){
    Adi<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
    
    
}