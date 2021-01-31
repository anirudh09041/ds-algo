#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class stack2{
	node *top;
public:
	stack2(){
		top=NULL;
	}
  void push(int x){
  	node *t;
  	t=new node;
  	t->data=x;

  	t->next=top;
  	top=t;

  }
  int pop(){

	  if(top==NULL) return -999999999;
	  node * temp;
  	  temp=top;
  	  int x = temp->data;
	  top=top->next;
  	  delete temp;
  	  return x;
  }
   void display(){
   	node * temp=top;
   	if(top==NULL) cout<<"STACK EMPTY";
   	while(temp!=NULL){
   		cout<<temp->data <<"  ";
   		temp=temp->next;
   			   }
   	cout<<"\n";
   }
};


int main(){

	stack2 s;
	s.push(10);
	s.push(20);
	s.push(23);
	s.push(34);
	s.display();
	cout<<s.pop()<<"  !  ";
	cout<<s.pop()<<"   !  ";
	cout<<s.pop()<<"  !  ";
	cout<<s.pop()<<"   !  ";
	cout<<s.pop()<<"  !  ";
	cout<<s.pop()<<"   !  ";
	s.display();

}
