#include<iostream>
using namespace std;

class binary{
        string s;
        public:
        void read(void);
        void chk_bin(void);
    };
    void binary :: read (void){
        cout<<"enter a binary no. "<<endl;
        cin>>s;
    }
    void binary :: chk_bin(void){
        for (int i=0; i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"Incorrect binary format"<<endl;
                exit(0);
            }
        }
    }

int main(){
    //OOPs- classes and objects
    //c++ ------>c with classes by stroustroup
    //class  ------->extension of structures (in C)
    // structures had limitations
    //    ---> members are public
    //    ---> No methods
    //    classes = structures + more
    //     classes --->can have methods and properties
    //     classes ---> can make few members as private &few as public
    //     structures in c++ are typedefd
    //     you can declare objectss along with the class declaration
   /*  class employee{
        class defination
    }harry,rohan,adi; */
    // adi.salary = 8 makes no sense if salary is private
    //Nesting of member functions
    binary b;
    b.read();
    b.chk_bin();
    return 0;
}