#include<iostream>
using namespace std;


int fib(int n)  //recursion
{
    if(n==0||n==1)
    return n;

    return fib(n-1) + fib(n-2);
}

int fibDP(int n, int* dp)   // recursion with memoization topdownDP:
{
    if(n==0||n==1)
    {
        dp[n] = n;
        return n;
    }

    //already computed
    if(dp[n]!= -1)
    {
        return dp[n];
    }

    else
    {  //compute and store
        dp[n] = fibDP(n-1,dp) + fibDP(n-2,dp);
        return dp[n];
    }

}

int fibBottomUp(int n)
{
    int* dp = new int[n];
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];

    }

    return dp[n];
}


int main()
{
    // int dp[100];

    // for(int i=0; i<100; i++)
    // dp[i] = -1;

    
//   cout<< fibDP(10,dp)<<endl;

    cout<< fibBottomUp(5)<<endl;

    return 0;

}