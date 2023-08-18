#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our files with hout stream
    ofstream aout("sample60.txt");

    //creating a name string and fillig with the string entered by the user
    cout<<"Enter your name";
    string name;
    cin>>name;

    //writing a string to the file

    aout<<"My name is "+ name;
    aout.close();

    ifstream ain("sample60.txt");
    string content;
    ain>>content;
     getline(ain, content); 
    cout<<"the content of ths file is: "<<content;
    ain.close();
    return 0;
}