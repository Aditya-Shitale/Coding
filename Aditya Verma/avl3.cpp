#include<iostream>
using namespace std;
const long long MD = 1e9+7;

int main()
{
    long long int N, A, B, Q;
    cin >> N >> A >> B >> Q;
    
    // ---generating the input
    long long int L[N];
    long long int R[N];
    L[0] = A;
    R[0] = B;
    // cout<<L[0]<<" "<<R[0]<<endl;
    for(long long int i = 1; i < N; i++) {
        L[i] = (L[i-1] * (A*i+B)) % MD;
        R[i] = L[i] + ((A*i+B) % MD);
        // cout<<L[i]<<" "<<R[i]<<endl;
    }
    long long q[Q];
    q[0] = A+B;
    // cout<<q[0]<<endl;
    for(long long int i = 1; i < Q; i++) {
        q[i] = (q[i-1] * (A*i+B)) % MD;
        // cout<<q[i]<<endl;
    }
    long long int sum=0;
    for(long long int i=0;i<Q;i++)
    {
        for(long long int j=0;j<N;j++)
        {
            if(q[i]==L[j] || (q[i]>L[j] && q[i]<R[j]) || q[i]==R[j])
            {
                sum++;
            }

        }
    }
    cout << sum;

    return 0;
}