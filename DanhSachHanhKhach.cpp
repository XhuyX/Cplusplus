#include <bits/stdc++.h>
using namespace std;
struct Node{
	string ten;
	int tuoi,toa,ghe;
	Node *next;
};
typedef Node *node;
node taonode(string ten, int tuoi, int toa, int ghe){
	node tmp=new Node;
	tmp->ten=ten;
	tmp->tuoi=tuoi;
	tmp->toa=toa;
	tmp->ghe=ghe;
	tmp->next=NULL;
	return tmp;
}
void LastIns(node &head, string ten, int tuoi, int toa, int ghe){
	node tmp=taonode(ten,tuoi,toa,ghe);
	if (head==NULL){
		head=tmp;
	}
	else {
		int check=1;
		node p=head,q;
		while(p!=NULL){
			if (p->toa==toa && p->ghe==ghe){
				cout<<"FAIL\n";
				check=0;
				break;
			}
			q=p;
			p=p->next;
		}
		if (check==1){
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
			if (p==head){
				head=head->next;
			}
			else {
				q->next=p->next;
			}
			delete p;
			check=1;
			
		}
		q=p;
		p=p->next;
	}
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

