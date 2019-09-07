#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
	vector<string> v,v1;
	char s1[26];
	for(int i=0;i<26;i++){
		s1[i]=char(65+i);
		string c="";
		c=s1[i];
		v.push_back(c);
	}
	cout<<s1<<"\n";
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			string c1="";c1=s1[i];
			string c2="";c2=s1[j];
			string s=c1+c2;
			v1.push_back(s);
		}
	}
	sort(v1.begin(),v1.end());
	for(int i=0;i<v1.size();i++){
		v.push_back(v1[i]);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"\t";
	}
	return 0;
}
