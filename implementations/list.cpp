#include<iostream>
using namespace std;

class myList{
	int data[10];
	int last = -1;
	int i=0;
	public:
		
		int add(int value)
		{
			data[i] = value;
			i++;
			last++;
		}
		int remove(int position)
		{
			if(last<0){
				cout<<"list is empty";
			}
			if(position>last){
				cout<<"position out of bound";
			}
			for(i=position;i<last;i++){
				data[i] = data[i+1];
			}
			last--;
		}
		void print()
		{
			for(i=0;i<=last;i++)
			{
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	myList a;
	
	a.add(10);
	a.add(20);
	a.add(23);
	a.add(45);
	
	a.print();
	a.remove(6);
	a.print();	
}
