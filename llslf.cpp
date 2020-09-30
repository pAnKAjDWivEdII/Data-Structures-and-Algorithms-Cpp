#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
	
}*head,*head2=NULL,*third=NULL;

void createll(int a[],int n){
	struct Node *t,*last;
	head= new Node;
	head->data=a[0];
	last=head;
	for(int i=1;i<n;i++){
		t=new Node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=last->next;//last=t;
		
	}
	 
	
}


void createll2(int a[],int n){
	struct Node *t,*last;
	head2= new Node;
	head2->data=a[0];
	last=head2;
	for(int i=1;i<n;i++){
		t=new Node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=last->next;//last=t;
		
	}
	 
	
}



void search(struct Node *p,int key){
	Node *q=NULL;
	p=head;
	cout<<"LOL";
	while(p!=NULL){
		if(key==p->data){
			q->next=p->next;
			p->next=head;
			head=p;
			break; 		
			
		}
		else{
			q=p;
			p=p->next;
		}
	
	}
	cout<<"\n New transormer : \n";
	
	
}
void insert(struct Node *p,int ele,int pos){
	int count=1;
	struct Node *q;
		q = new Node;
		q->data=ele;
		q->next=NULL;
		if(pos==0){
			q->next=head;
			head=q;
		}
		else{
	
			while(p!=NULL){
		
		if(count==pos){
			q->next=p->next;
			p->next=q;
			
			break;
		}
		else{
			p=p->next;
			count++;
		}
	}
			
		}
	
	
}

void deletell(struct Node *p,int ele){
	Node *q=NULL;
	while(p!=NULL){
		if(p->data==ele&&p==head){
			struct Node *del=head;
			
			head=head->next;
			delete(del);
			break;
		}
		else if(p->data==ele){
			struct Node *del=p;
			q->next=p->next;
			delete(del);
			break;
		}
		else{
			q=p;
			p=p->next;
		}
	}
	
	
	
}

int sortll(struct Node *p){
	Node *q=p;
	p=p->next;
	while(p!=NULL){
		if(q->data<=p->data){
			q=p;
			p=p->next;
		}
		else {
			return 0;
		}	
		
	}
	return 1;
	
}

void duplidel(struct Node *p){
	Node *q;
	q=p;
	p=p->next;
	while(p!=NULL){
		if(p->data==q->data){
			q->next=p->next;
			Node *del;
			del =p;
			p=p->next;
			delete(del);
		}
		else {
			q=p;
			p=p->next;
			
		}
		
	}
	
}
void reversell(struct Node *p){
	struct Node *q=NULL,*r=NULL;
	while(p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	//	cout<<"STEP !";
		}
		head=q;
	
}
void display(struct Node *p){
	cout<<"\n dis";
//	p=head;
	int max=0;
	while(p!=NULL){
	cout<<p->data<<" ";
	if(max<p->data)
	max=p->data;
	p=p->next;	
		
	}
													
}

void  merge(struct Node *l1,struct Node *l2){
	Node *last;
	if(l1->data<l2->data){
		third=l1;
		last=l1;
		l1=l1->next;
		last->next=NULL;
		cout<<third->data<<" ";
	}
	else{
		third=l2;
		last=l2;
		l2=l2->next;
		last->next=NULL;
		
		cout<<third->data<<" ";
	}
	
	while(l1!=NULL&&l2!=NULL){
		
		if(l1->data<l2->data){
			last->next=l1;
			l1=l1->next;
			last=last->next;
			last->next=NULL;
			
		cout<<third->data<<" ";
		}else{
			last->next=l2;
			l2=l2->next;
			last=last->next;
			last->next=NULL;
			
		cout<<third->data<<" ";
			
		}
		
	}
	
	if(l1!=NULL){
		last->next=l1;
	}
	else{
		last->next=l2;
	}
	
	}
	
	
	
	

int main(){
	int a[]={1,2,3,3,5,6,7};
	createll(a,7);
	display(head);
//	search(head,9);
int b[]={4,6,7,8,9,12,13,14,15};
	createll2(b,9);
	display(head2);
	merge(head,head2);
	display(third);
	
	return 0;
}

