#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],M[A[i]]++;
    sort(A,A+N);
    for(ll i=0;i<N;++i)
    {
        if(M[A[i]]>1)
        {
            M[A[i]+1]++;
        }
    }
    cout<<M.size()<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/