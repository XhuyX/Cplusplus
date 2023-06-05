#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	while(getline(cin,s)){
		char check;
		long long ss=0;
		for (int i=0;i<s.size();i++){
			if (isdigit(s[i])){
				check=s[i-1];
				int d=s[i]-'0';
				int j=i+1;
				while(isdigit(s[j])){
					d=d*10 + s[j]-'0';
					j++;
				}
				i=j;
				if (check=='-'){
					ss-=d;
				}
				else ss+=d;
			}
		}
		cout<<ss<<"\n";
	}
	return 0;
}
