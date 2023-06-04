#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		int a[256]={0};
		for (int i=0;i<s.size();i++){
			a[s[i]]++;
		}
		for (int i=0;i<s.size();i++){
			for (int j=0;j<256;j++){
				if (a[j]!=0){
					if (s[i]==j){
						cout<<s[i]<<a[j];
						a[j]=0;
					}
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
    









