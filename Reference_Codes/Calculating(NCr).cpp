//calculating NCr using inverse modulo
// a^(m-2) mod m == inverse modulo of a under m
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll m=1000000007;
 
 
ll fastmodexp(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1) res=(res*a)%m;
        b=b>>1;
        a=(a*a)%m;
    }
    return res;
}
 
ll solve(ll n,ll k){
    if((n-k)<k) k=n-k;
    ll res=1;
    for(ll i=0;i<k;i++){
        res= ( ( (res*(n-i))%m ) * fastmodexp(i+1,m-2) )%m;
    }
    return res;
}
 
int main(){
    ll n;cin>>n;
    ll r;cin>>r;
    cout<<solve(n,r);
    return 0;
}
