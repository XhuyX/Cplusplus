#include <bits/stdc++.h>
using namespace std;
int main(){
	int d;
	vector <int > v;
	while(cin>>d){
				v.push_back(d);
	}
	if (v.size()==0){
		cout<<"danh sach rong";
		return 0;
	}
	sort(v.begin(),v.end());
	for (int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
