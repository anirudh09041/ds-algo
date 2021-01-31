//This queue implementation is CYCLIC (Static size)
// Front of the queue is NOT always at index 0 of array 
#include<iostream>

#define capacity 50

using namespace std;

class queue{
	int e[capacity];
	int front,rear;
	
public:
    queue(){
    	front=-1; 
		rear=-1;
	}	
	void enqueue(int d){
		if(front==0 & rear==capacity-1){
			cout<<"queue is full, no element added";
			return;
		}
		if(front== rear+1){
			cout<<"queue is full, no element added";
			return;
		}
		if(front==-1){
			front++; 
			rear++;
			e[rear]=d;
			return;
		}
		if(rear==capacity-1){
			rear=0;
			e[rear]=d;
			return;
		}

		rear++;
		e[rear]=d;
	}	
	int dequeue(){
		if(front==-1){
			cout<<"queue is EMPTY, nothing to remove";
			return -99999999;
		}
		
		int temp=e[front];
		
		if(front==rear){
			front=-1;
			rear=-1;
			return temp;
		}
		if(front==capacity-1){
			front=0;
			return temp;
		}
		front++;
		return temp;
	
	}
	void display(){
		cout<<"\n  queue elements are :";
		
		//for(int i=;i<=;i++) cout <<e[i]<<"   ";
	   	
	}	
	
};

int main (){
	queue q1;
	q1.enqueue(2); q1.enqueue(7); q1.enqueue(5);
	q1.enqueue(9); q1.enqueue(6);
	q1.display();
	cout<<"\n removed   "<<q1.dequeue();
	cout<<"\n removed   "<<q1.dequeue();
	cout<<"\n removed   "<<q1.dequeue();
	q1.display();
	cout<<"\n removed   "<<q1.dequeue();
	cout<<"\n removed   "<<q1.dequeue();
	cout<<"\n removed   "<<q1.dequeue();
}

