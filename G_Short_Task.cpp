#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[10000000+1];
void pre()
{
    //memset(dp,-1,sizeof(dp));
    for(ll i=1;i<=500000;++i)
    {
        ll c = 0;
        if(i==500000)cout<<c<<'\n';
        dp[c]=i;
    }
}
void solve()
{
    ll X;cin>>X;
    if(!dp[X])cout<< dp[X] <<'\n';    
    else cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/