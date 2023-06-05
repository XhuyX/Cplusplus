#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	//nhập xâu
	while(getline(cin,s)){
		//biến kiểm tra
		char check;
		//biến tổng
		long long ss=0;
		for (int i=0;i<s.size();i++){
			//nếu kí tự tại vị trí i là số
			if (isdigit(s[i])){
				check=s[i-1];
				//thì số d này bằng kí tự tại i trừ đi giá trị 0
				int d=s[i]-'0';
				//gán vị trí i cho j và tăng lên 1 đơn vị
				int j=i+1;
				//trong lúc vị trí j này còn là số
				while(isdigit(s[j])){
					d=d*10 + s[j]-'0';
					j++;
				}
				i=j;
				// nếu biến kiểm tra là dấu trừ
				if (check=='-'){
					//thì tổng trừ đi số d
					ss-=d;
				}
				else ss+=d;
			}
		}
		cout<<ss<<"\n";
	}
	return 0;
}
