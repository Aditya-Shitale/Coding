#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is in associative array
int main(){
    map<string, int> marksMap;
    marksMap["adi"]=98;
    marksMap["dev"]=12;
    marksMap["shrey"]=2;
    map<string, int>:: iterator iter;
    for(iter=marksMap.begin(); iter!=marksMap.end();iter++){

        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }



    return 0;
}