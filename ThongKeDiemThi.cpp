#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<fixed<<setprecision(1);
	int n,c=0;
	cin>>n;
	float a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]>=5.5){
			c++;
		}
	}
	//xắp sếp mảng theo chiều tăng dần
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]<a[j]){
				float x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	
	cout<<c<<"\n";
	//nếu số sinh viên nhập vào nhỏ hơn hoặc bằng 10 thì in ra n sinh viên
	if (n<=10){
		for (int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
	//nếu không thì in ra 10 người có điểm cao nhất
	else {
		for (int i=0;i<10;i++){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
