#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll K;cin>>K;
     for(ll i=1;i<=K;++i)
        {
            for(ll j=1;j<=K;++j)
            {
                if(i==j or (i+j)==(K+1))cout<<i;
                else cout<<' ';
            }
            cout<<'\n';
        }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/