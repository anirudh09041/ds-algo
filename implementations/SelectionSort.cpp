#include<iostream>
using namespace std;
int A[], int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		int iMin = i;

		 for(int j=i+1; j<n; j++)
		 {
		 	if(A[j] < A[iMin])
		 		iMin = j;
		 }
		 int temp = A[i];
		 A[i] = A[iMin];
		 A[iMin] = temp;

	}
}

int main(int argc, char const *argv[])
{
	int A[] = {2,4,5,3,7};
	int n = 5;
	selectionSort(A,5);
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<endl;
	}

	return 0;
void selectionSort(
}