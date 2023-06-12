#include <bits/stdc++.h>
using namespace std;
struct thuoc{
	string ten,hsd;
	long long sl,dg;
	void in(){
		cin>>ten>>hsd>>sl>>dg;
	}
	void out(){
		cout<<ten<<","<<hsd<<","<<sl<<","<<dg<<"\n";
	}
};
int check(string x){
	int a[3];
	int c=0;
	for (int i=0;i<x.size();i++){
		if (x[i]>='0'&& x[i]<='9'){
			int d=x[i]-'0';
			int j=i+1;
			while(isdigit(x[j])){
				d=d*10 + x[j]-'0';
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
	int c=0;
	int n;
	cin>>n;
	vector <thuoc> v;
	while(n--){
		thuoc x;
		x.in();
		v.push_back(x);
	}
	for (int i=0;i<v.size();i++){
		if (check(v[i].hsd)){
			c++;
			ss+= v[i].sl * v[i].dg;
		}
	}
	cout<<c<<"\n"<<ss;
	return 0;
} 
/*
Atropin_sulfat 20/03/2023 10 50000
Meloxicam 10/10/2023 5 100000
Paracetamol 01/12/2022 15 30000
Allopurinol 16/06/2023 30 15000
*/
