#include <bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	string s="";
	for (int i=0;i<k;i++){
		s+=to_string(i);
	}
	cout<<s[k];
	return 0;
}    
