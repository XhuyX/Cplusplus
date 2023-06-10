#include <bits/stdc++.h>
using namespace std;
float lamtron(float x){
	float a=x- int(x);
	a*=10;
	float b=a-int(a);
	if (b>=0.5){
		x= x -b/10 + 0.1;
	}
	return x;
}
int main(){
	cout<<fixed<<setprecision(1);
	int n;
	cin>>n;
	while(n--){
		float qtht,thi,kthp;
		cin>>qtht>>thi;
		kthp=qtht*0.4+ thi*0.6;
		kthp=lamtron(kthp);
		cout<<kthp<<" ";
		if (kthp<4.0){
			cout<<"F\n";
		}
		else if (kthp<5.5){
			cout<<"D\n";
		}
		else if (kthp<7.0){
			cout<<"C\n";
		}
		else if (kthp<8.5){
			cout<<"B\n";
		}
		else cout<<"A\n";
	}
	return 0;
}    
