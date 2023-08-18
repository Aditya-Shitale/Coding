    int z=solve(vec,i,k);
        int x=solve(vec,k+1,j);
        int y=vec[i-1]*vec[k]*vec[j];
        // cout<<z<<" "<<x<<" "<<y<<endl;
        int temp=x+y+z;
        ans=min(ans,temp);