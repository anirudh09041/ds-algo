#include<iostream>
using namespace std;

void InsertionSort(int a[] ,int n){
    for(int i = 1; i<=(n-1); i++){
        int value = a[i];
        int hole  = i;
        while(hole > 0 && a[hole-1] > value){
            
            a[hole] = a[hole-1];
            hole -= 1 ;
        }
        a[hole] = value;
    }
}

int main(){
    int a[5] = {5,7,8,3,1};
    int n = 5;
    InsertionSort(a , n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

