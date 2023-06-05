#include <bits/stdc++.h>
using namespace std;
//khai báo cấu trúc dữ liệu theo đề bài
struct Node{
	string ten;
	int tuoi,toa,ghe;
	Node *next;
};
// Định dạng lại cấu trúc để viết code tiện hơn
typedef Node *node;
//hàm này để tạo node
node taonode(string ten, int tuoi, int toa, int ghe){
	node tmp=new Node;
	tmp->ten=ten;
	tmp->tuoi=tuoi;
	tmp->toa=toa;
	tmp->ghe=ghe;
	tmp->next=NULL;
	return tmp;
}
// chèn cuối 
void LastIns(node &head, string ten, int tuoi, int toa, int ghe){
	node tmp=taonode(ten,tuoi,toa,ghe);
	//nếu node head rỗng thì gán node tmp cho node head
	if (head==NULL){
		head=tmp;
	}
	else {// biến kiểm tra
		int check=1;
		node p=head,q;
		while(p!=NULL){
			// nếu node nào đó trong danh sách liên kết head này giữ toa và ghế bằng với toa và ghế cần chèn
			if (p->toa==toa && p->ghe==ghe){
				//thì in ra chèn thất bại
				cout<<"FAIL\n";
				//cho giá trị kiểm soát = 0 (false)
				check=0;
				//kết thúc lệnh while
				break;
			}
			//nếu không phải vậy thì cứ tiếp tục
			q=p;
			p=p->next;
		}
		//nếu biết kiểm tra =1 (tức là chưa có toa và ghế trùng)
		if (check==1){
			//thì tiến hành chèn cuối
			q->next=tmp;
		}
	}
}
int SumPax(node head, int toa){
	long long sum=0;
	node p=head;
	while(p!=NULL){
		if (p->toa==toa){
			sum++;
		}
		p=p->next;
	}
	return sum;
}
void DelPax(node &head, int toa, int ghe){
	node p=head,q;
	int check=0;
	while(p!=NULL){
		if (p->toa==toa && p->ghe==ghe){
			// nếu node p này = node head (câu lệnh while chưa thực hiện 1 lần nào cả)
			if (p==head){
				//thì chuyển node head sang node kế tiếp nó
				head=head->next;
			}
			else {//nếu không thì tiến hành chuyển node sau sang node trước (q=sau) p=trước
				q->next=p->next;
			}
			//xóa node p
			delete p;
			check=1;
			
		}
		q=p;
		p=p->next;
	}
	//nếu chưa cuất hiện node nào trùng thì int ra NONE
	if (check==0){
		cout<<"NONE\n";
	}
}
int main(){
	node head=NULL;
	string cmd,ten;
	int tuoi,toa,ghe;
	while(2){
		cin>>cmd;
		if (cmd=="end") {
		break;}
		else if (cmd=="ins"){
			cin>>ten>>tuoi>>toa>>ghe;
			LastIns(head,ten,tuoi,toa,ghe);
		}
		else if (cmd=="del"){
			cin>>toa>>ghe;
			DelPax(head,toa,ghe);
		}
		else if (cmd=="sum"){
			cin>>toa;
			cout<<SumPax(head,toa)<<"\n";
		}
	}
	
	return 0;
}

