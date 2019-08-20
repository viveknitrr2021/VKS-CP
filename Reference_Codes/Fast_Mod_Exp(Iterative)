//fast modular exponentiation
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll fastmodexp(ll a,ll b,ll m){
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%m; 
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}
int main(){
    ll a,b,m;
    cin>>a>>b>>m;
    cout<<fastmodexp(a,b,m);
    return 0;
}
