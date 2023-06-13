#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node*next;
};
typedef Node* node;
void ins(node &head, int x){
	node tmp=new Node;
	tmp->data=x;
	tmp->next=NULL;
	if (head==NULL){
		head=tmp;
	}
	else {
		if (x%2!=0){
			tmp->next=head;
			head=tmp;
		}
		else {
			node p=head;
			while(p->next!=NULL){
				p=p->next;
			}
			p=p->next=tmp;
		}
	}
}
void out1(node head){
	node p=head;
	cout<<p->data<<"\n";
}
void out2(node head,int pos){
	int vt=1;
	node p=head;
	while(vt<pos){
		vt++;
		p=p->next;
	}
	cout<<p->data<<"\n";
}
void out3(node head){
	node p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	cout<<p->data;
}
int main(){
	int n,so,nn;
	cin>>n;
	node head=NULL;
	nn=1+(n-1)/2;
	while(n--){
		cin>>so;
		ins(head,so);
	}
	out1(head);
	out2(head,nn);
	out3(head);
	return 0;
}
