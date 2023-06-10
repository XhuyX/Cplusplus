#include <bits/stdc++.h>
using namespace std;
int xuly(int x){
	if (x<=11){
		return x;
	}
	else {
		int ans=0;
		while(x){
			int b=x%10;
			ans +=b;
			x/=10;
		}
		return ans;
	}
}
int main(){
	int ss=0;
	string s;
	getline(cin,s);
	for (int i=0;i<s.size();i++){
		if (s[i]=='/'){
			cout<<'/';
		}
		else if (s[i]>='0' && s[i]<='9'){
			ss+=s[i]-'0';
			cout<<s[i];
		}
	}
	cout<<" ";
	ss=xuly(ss);
	cout<<xuly(ss);
	return 0;
}    
