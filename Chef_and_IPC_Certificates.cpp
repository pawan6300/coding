#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K,M;cin>>N>>M>>K;
    ll ans=0;
    while(N--)
    {
        ll s=0,x;
        for(ll i=0;i<K;++i)
        {
            cin>>x;
            s+=x;
        }
        cin>>x;
        if(s>=M and x<=10)++ans;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/