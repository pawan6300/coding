#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c,d,K;cin>>a>>b>>c>>d>>K; 
    ll p = abs(c-a) + abs(d-b);
    if(p<=K and abs(K-p)%2==0)cout<<"YES\n";
    else cout<<"NO\n";
    //cout<<p<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/