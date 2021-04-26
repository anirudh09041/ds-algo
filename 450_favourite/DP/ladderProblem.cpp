#include<iostream>
using namespace std;

int findWays(int n)   //recursive solution
{  

    if(n==0)
    {
       return 1;
    }

    if(n<0)
    {
        return 0;
    }
    
    int ans = findWays(n-1) + findWays(n-2) + findWays(n-3);
    return ans;
}


int findWaysDP(int n, int k)
{
    int* dp = new int[n];
    dp[0] = 1;

    for(int step=1; step<=n; step++)
    {
        dp[step] = 0;
        for(int j=0; j<=k; j++)
        {
            if(step-j>=0)
            dp[step] += dp[step - j];

        }
    }
    int ans = dp[n];
    delete [] dp;
    return ans;
}
int main()
{
//    cout<< findWays(100)<<endl;
      cout<< findWaysDP(5,4)<<endl;
      
      return 0;
}



