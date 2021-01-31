#include<iostream>
using namespace std;

class Stack{
	private:
		int top;
		int arr[5];

	public:
		Stack()
		{
			top = -1;
			for(int i=0;i<5;i++)
			{
				arr[i]= 0;
			}
		}

		bool isEmpty()
		{
			if(top == -1)
			        return true;
			else
				return false;
		}
		bool isFull()
		{
			if(top == 4)
				return true;
			
			else
				return false;
		
		}
		void push(int val)
		{
			if(isFull())
			{
				cout<<"stack overflow"<<endl;
			}
			else
			{
				top++;
				arr[top] = val;
			}
		}

		int pop()
		{
			if(isEmpty())
			{
				cout<<"stack underflow"<<endl;
			}
			else
			{
				int popvalue = arr[top];
				arr[top] = 0;
				top--;
				return popvalue;
			}
		}
};
int main()
{ Stack s1;
s1.push(12);
s1.push(10);
s1.push(112);
s1.push(14);
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;


s1.push(100);
return 0;
}
