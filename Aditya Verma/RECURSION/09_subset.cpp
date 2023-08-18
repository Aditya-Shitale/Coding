
#include<bits/stdc++.h>
using namespace std;

void subset(string ip,string op,map<string,int> &m)
{
	if(ip.size()==0)
	{
		m[op]++;
        // only these two lines I added additionally checking whether string was present before or not.  
        // If not then print. Rest is full same code as before just declare map and pass by reference.
		if(m[op]==1){
		cout<<op<<endl;
        }
		return;
	}
	string op1=op,op2=op; //stored previous output of in two variables
	op2.push_back(ip[0]);  //decision taken to choose element in one output and not to choose element in another output
	ip.erase(ip.begin()+0); //erased the input as decision is taken
	subset(ip,op1,m); //recursive call for not choosing decision
	subset(ip,op2,m); //recursive call for choosing decision
}

int main()
{
	string ip="aacc";
	map<string,int> m;
	subset(ip,"",m);
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	set<vector<int>> st;
// 	st.insert({1,2,2});
// 	st.insert({2,2,1});
// 	cout<<st.size();
// 	return 0;
// }