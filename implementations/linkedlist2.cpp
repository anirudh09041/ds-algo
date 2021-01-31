#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
	char data;
	node* next;
};

class LinkedList{
node* START = NULL;
public:
LinkList(){
	START=NULL;
}	
void addbeg(char v){
	node* t;
	t = new node;
	t->data = v;
	t->next = START;
	START = t;
}
void addend(char v){
	if(START==NULL){
		addbeg(v);
		return;
	}
	node* n;
	n = new node;
	n->data = v;
	n->next = NULL;
	node* temp;
	temp = START;
	while(temp->next!=NULL)
	temp = temp->next;
	
	temp->next = n;
}
void display(){
	node*  temp;
	temp = START;
	while(temp!=NULL)
	{
		cout<<temp->data<<'\t';
		temp = temp->next;
	}
	cout<<'\n';
}
struct node* reverse()
{
	struct node* pr = NULL;
	struct node* ne = NULL;
	while(START!=NULL)
	{
		ne = START->next;
		START->next = pr;
		pr = START;
		START = ne;
	}
}
};

int main()
{
	LinkedList l1;
	l1.addbeg('d');
	l1.addbeg('c');
	l1.addbeg('v');
	l1.addbeg('b');
	l1.addbeg('a');
	l1.addbeg('w');
	l1.addend('z');
	l1.display();
	l1.reverse();
	l1.display();
	
	return 0;
}
