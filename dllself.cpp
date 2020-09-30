#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *prev,*next;
}*head;
void create(int a[],int n){
	struct Node *p,*last,*q;
	head=new Node ;
	head->data=a[0];
	head->next=head->prev=NULL;
		last=head;
	for(int i=1;i<n;i++){
		p=new Node;
		p->data=a[i];
		p->next=last->next;
		p->prev=last;
		last->next=p;
		last=p;
	
	}
	
}



void display(struct Node *p){
	cout<<endl;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}

void insert (int ele ,int pos ,struct Node *p){
	struct Node *q;
	q=new Node;
	q->data=ele;
	q->next=q->prev=NULL;
	if(pos == 0){
		q->next=head;
		head->prev=q;
		head=q;
	}
	else{
		for(int i=1 ;i<=pos;i++){
			p=p->next;
		
		}
		q->next=p->next;
		q->prev=p;
		p->next=q;
		q=q->next;
		q->prev=p->next;
		
	}
}

int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	create(a,9);
	display(head);
	insert(12,1,head);
	display(head);
}
