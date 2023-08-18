/*
A weird number x and size of array is atleast 2. A number x is weird if the count of x is greater than the count of any other element in arrayEg [1,2,1,3,3,4,1,2] is a weird array with 1 as the weird number (x).Find the minimum size of weird subarray array orreturn 0 if no subarray exists.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    map<int,int>mp1;
    for(int i=0;i<n;++i) cin>>a[i], mp1[a[i]]++;
    
    if(mp1.size()==n)
    {
        cout<<"0"<<endl;
        return 0;
    }
    
 
    int l=2, r=n;
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        
        map<int,int>mp;
        int tmp=-1;
        for(int i=0;i<n;++i)
        {
            mp[a[i]]++;
            if(i>=mid-1)
            {
                if(mp.size()==1)
                {
                    tmp=mid;
                    break;
                }
                
                auto it=prev(mp.end());
                int x=it->second;
                it--;
                int y=it->second;
                
                if(x!=y) {
                    tmp=mid;
                    break;
                }
                
                if(mp[a[i-(mid-1)]]==1) mp.erase(a[i-(mid-1)]);
                else mp[a[i-(mid-1)]]--;
            }
        }
        
        if(tmp==-1)
        {
            l=mid+1;
        }
        else
        {
            ans=tmp;
            r=mid-1;
        }
    }
    
    cout<<ans<<endl;
}