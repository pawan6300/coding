#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll B[M]; for(ll i=0;i<M;++i)cin>>B[i];
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            if(A[i]==B[j])++ans;
        }
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/