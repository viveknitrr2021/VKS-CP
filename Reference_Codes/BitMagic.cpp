//counting no of set bits
//extracting ith bit
//setting ith bit
//clearing ith bit

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


// 1..................counting no of set bits
ll countbits(ll n){
	//n&(n-1) clears the last bit from right side
	ll count=0;
	while(n){
		count++;
		n&=(n-1);
	}
	return count;
}


// 2..................get ith bit
ll getithbit(ll n,ll i){
	//based on shifting 1 at ith bit and taking logical AND 
	//which will extract the bit
	return (n & 1<<i)==0?0:1;
}

// 3..................setting ith bit
ll setithbit(ll n,ll i){
	//making a mask which contains 1 at ith bit
	//than taking or will set irrespective of that
	//position being set or unset
	ll mask = 1<<i;
	n=n|mask;
	return n;
}


// 4..................clear ith bit
ll clearithbit(ll n,ll i){
	//making the mask 0 at the ith position
	//and taking logical AND which will make it 0
	ll mask=~(1<<i);
	n=n&mask;
	return n;
}


int main(){
	ll n,i;cin>>n>>i;
	// 13 in binary 1101
	//counting from right first one is zeroeth bit
	cout<<countbits(n)<<"\n";
	cout<<getithbit(n,i)<<"\n";
	cout<<setithbit(13,1)<<"\n";
	cout<<clearithbit(13,2)<<"\n";
	return 0;
}
