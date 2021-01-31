#include<iostream>
using namespace std;

void BubbleSort(int a[] ,int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	BubbleSort(a , 10);

	for(int i=0 ;i<10; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;

}
