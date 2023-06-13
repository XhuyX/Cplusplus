#include <bits/stdc++.h>
using namespace std;
struct ks{
	string ten,dc;
	int kc,gt;
	void out(){
		cout<<ten<<","<<dc<<", "<<kc<<", "<<gt<<"\n";
	}
};
int check(int x){
	if (x<=300){
		return 1;
	}
	return 0;
}
int main(){
	vector <ks> vks;
	int c=0,d=0;
	int n;
	cin>>n;
	cin.ignore();
	string s;
	while(getline(cin,s)){
		if(s=="\0") break;
		stringstream ss(s);
		string tmp;
		vector <string> v;
		while(getline(ss,tmp,'|')){
			v.push_back(tmp);
		}
		ks x;
		x.ten=v[0];
		x.dc=v[1];
		x.kc=stoi(v[2]);
		x.gt=stoi(v[3]);
		vks.push_back(x);
	}
	for (int i=0;i<vks.size();i++){
		if (check(vks[i].gt)){
			vks[i].out();
		}
	}
	cout<<"***\n";
	for (int i=0;i<vks.size();i++){
		if (vks[i].kc<=3){
			vks[i].out();
		}
	}
	return 0;
}
	
