#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3][3],b[4],c=0,m,n;
	//Nhap du lieu vao mang a
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	// nhap hang va cot can loai bo
	cin>>m>>n;
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			//
			if (i+1 != m && j+1 !=n){
				b[c++]=a[i][j];
			}
		}
	}
	//in ra man hinh ma tran con cap 2
	cout<<b[0]<<" "<<b[1]<<"\n"<<b[2]<<" "<<b[3]<<"\n";
	//in ra dinh thuc
	cout<<b[0]*b[3]-b[1]*b[2];
	return 0;
}
