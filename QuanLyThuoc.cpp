#include <bits/stdc++.h>
using namespace std;
struct thuoc{
	string ten,hsd;
	long long sl,dg;
	void in(){
		cin>>ten>>hsd>>sl>>dg;
	}
};
int check(string s){
	int a[3],c=0;
	for (int i=0;i<s.size();i++){
		if (s[i]>='0'&& s[i]<='9'){
			int d=s[i]-'0';
			int j=i+1;
			while(isdigit(s[j])){
				d=d*10 + s[j]-'0';
				j++;
			}
			i=j;
			a[c++]=d;
		}
	}
	swap(a[0],a[1]);
	if (a[2]<2023){
		return 1;
	}
	else {
		if (a[2]==2023){
			if (a[1]<5){
				return 1;
			}
			else {
				if (a[1]==5){
					if (a[0]<19){
						return 1;
					}
					else {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
		}
		else {
			return 0;
		}
	}
}
int main(){
	long long ss=0;
	int n,c=0;
	cin>>n;
	while(n--){
		thuoc x;
		x.in();
		if(check(x.hsd)){
			c++;
			ss+= x.sl * x.dg;
		}
	}
	cout<<c<<'\n'<<ss;
	return 0;
}
/*
4
Atropin_sulfat 20/03/2023 10 50000
Meloxicam 10/10/2023 5 100000
Paracetamol 01/12/2022 15 30000
Allopurinol 16/06/2023 30 15000
*/
