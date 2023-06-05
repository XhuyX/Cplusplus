#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	//nhập xâu
	while(cin>>s){
		//khai báo mảng (dùng để lưu trữ số lần lặp của từng kí tự trong xâu)
		int a[256]={0}; //gán tất cả phần tử trong mảng bằng 0
		for (int i=0;i<s.size();i++){
			//mỗi lần kí tự nào đó xuất hiện, giá trị của nó trong mảng A tăng 1 đơn vị
			a[s[i]]++;
		}
		for (int i=0;i<s.size();i++){
			for (int j=0;j<256;j++){
				//nếu giá trị của nó khác 0 tức là nó đã xuất hiện
				if (a[j]!=0){
					// nếu giá trị của kí tự trong mảng A bằng với chỉ số thứ tự của nó trong mảng A
					if (s[i]==j){
						// thì in ra màn hình
						cout<<s[i]<<a[j];
						//Kiểm soát lần in ra 
						a[j]=0;
					}
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
//Lưu ý: thuật toán này chỉ đúng khi các phần tử trong xâu xuất hiện liên tiếp nhau và nó chỉ xuất hiện 1 lần
//vd: Input:aaaabbaaa thì nó sẽ sai ngay Output: a7b2 mà output mong muốn là a3b2a2
    









