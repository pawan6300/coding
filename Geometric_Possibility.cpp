#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll s=0,mx=0,x;
    for(ll i=0;i<N;++i)cin>>x,s+=x,mx=max(mx,x);
    if((s-mx)>mx)cout<<"Yes\n";
    else cout<<"No\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/