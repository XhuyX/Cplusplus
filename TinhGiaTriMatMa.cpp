#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a[26];
	for (int i=0;i<26;i++){
		cin>>a[i];
	}
	long long ans=0;
	for (int i=0;i<s.size();i++){
		ans+= a[s[i]-'A'];
	}
	cout<<ans;
	return 0;
}
	
