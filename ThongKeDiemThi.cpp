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
	if (n<=10){
		for (int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
	else {
		for (int i=0;i<10;i++){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
