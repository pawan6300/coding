#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,W,Wr;cin>>N>>W>>Wr;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    W-=Wr;sort(A,A+N);
    for(ll i=0;i<N-1;++i)
    {
        if(A[i]==A[i+1])
        {
            W-=A[i]*2;++i;
        }
    }
    cout<<(W<=0?"YES":"NO")<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/