#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node*next;
};
typedef Node* node;
node taonode(int x){
	node tmp=new Node;
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
void InsertLast(node &head, int x){
	node tmp=taonode(x);
	if (head==NULL){
		head=tmp;
	}
	else {
		node p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
int size(node head){
	int c=0;
	node p=head;
	while(p!=NULL){
		c++;
		p=p->next;
	}
	return c;
}
void INf(node &head,int x){
	node tmp=taonode(x);
	if (head==NULL){
		head=tmp;
	}
	else {
		tmp->next=head;
		head=tmp;
	}
}
void InsertPos(node &head, int x, int pos){
	if (pos <=1){
		INf(head,x);
	}
	else if (pos>size(head)){
		InsertLast(head,x);
	}
	else {
		int vt=1;
		node p=head,q;
		node tmp=taonode(x);
		while(vt<pos){
			q=p;
			p=p->next;
			vt++;
		}
		tmp->next=p;
		q->next=tmp;
	}
}
void EnumerateList(node head){
	node p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
void Delete(node &head, int pos){
	int vt=1;
	node p=head,q;
	while(vt<pos && p!=NULL){
		vt++;
		q=p;
		p=p->next;
	}
	if (vt==pos){
		if (p==head){
			head=head->next;
		}
		else{
			q->next=p->next;
		}
		delete p;
	}
}
int CountList(node head){
	int c=0;
	node p=head;
	while(p!=NULL){
		if (p->data>=0)c++;
		p=p->next;
	}
	return c;
}
void rx(node &head, int x){
	node p=head;
	while(p!=NULL){
		p->data-=x;
		p=p->next;
	}
}
int main(){
	node head=NULL;
	int n,so,x;
	cin>>n;
	while(n--){
		cin>>so;
		InsertLast(head, so);
	}
	char cmd;
	while(cin>>cmd){
		if (cmd=='e'){
			EnumerateList(head);
			cout<<"\n";
		}
		if (cmd=='d'){
			cin>>x;
			Delete(head,x);
		}
		if (cmd=='r'){
			cin>>x;
			rx(head,x);
		}
		if (cmd=='i'){
			cin>>so>>x;
			InsertPos(head,so,x);
		}
		if (cmd=='0') break;
		if (cmd=='c'){
			cout<<CountList(head)<<"\n";
		}
	}
	return 0;
}
