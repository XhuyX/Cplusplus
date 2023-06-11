#include <bits/stdc++.h>
using namespace std;
struct Node{
	string ms,ten;
	int sl,dg;
	Node *next;
};
typedef Node*node;
node taonode(string ms,string ten, int sl, int dg){
	node tmp=new Node;
	tmp->ms=ms;
	tmp->ten=ten;
	tmp->sl=sl;
	tmp->dg=dg;
	tmp->next=NULL;
	return tmp;
}
void InsertLast(node &head,string ms,string ten, int sl, int dg ){
	node tmp=taonode(ms,ten,sl,dg);
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
void DeleteLast(node &head){
	if (head==NULL){
		
	}
	else if (head->next==NULL){
		head=NULL;
	}
	else {
		node p=head,q;
		while(p->next!=NULL){
			q=p;
			p=p->next;
		}
		q->next=NULL;
	}
}
int Count(node head, int dongia){
	int c=0;
	node p=head;
	while(p!=NULL){
		if (p->dg<=dongia){
			c++;
		}
		p=p->next;
	}
	return c;
}
int TotalValue(node head, string masach){
	int c=-1;
	node p=head;
	while(p!=NULL){
		if (p->ms==masach){
			c=p->sl*p->dg;
		}
		p=p->next;
	}
	return c;
}
int main(){
	node head=NULL;
	string cmd,ten,masach;
	int sl,dg;
	while(2){
		cin>>cmd;
		if (cmd=="finish") break;
		else if (cmd=="insert"){
			cin>>masach>>ten>>sl>>dg;
			int check=1;
			node p=head;
			while(p!=NULL){
				if (p->ms==masach){
					check=0;
					break;
				}
				p=p->next;
			}
			if (check==1){
				InsertLast(head,masach,ten,sl,dg);
		}
		}
		else if (cmd=="totalvalue"){
			cin>>masach;
			cout<<TotalValue(head,masach)<<"\n";
		}
		else if (cmd=="delete"){
			DeleteLast(head);
		}
		else if (cmd=="count"){
			cin>>dg;
			cout<<Count(head,dg)<<"\n";
		}
	}
	return 0;
}    
