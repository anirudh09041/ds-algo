#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PI 3.1415926535897932384626

const int mod = 1000000007;
//==============================

// Recursion
int minBills(int coins[],int amount,int n)
{
	if(amount == 0)
	{
		return 0;
	}

	int ans = INT_MAX;

	for(int i=0; i<n; i++)
	{
		if(amount - coins[i]>=0)
		{
			int smallerAns = minBills(coins,amount-coins[i],n);
			if(smallerAns != INT_MAX)
			{
				ans = min(ans,smallerAns+1);
			}
		}
	}
	return ans;
}



//Bottom Up DP


int coinsNeededDP(int coins[],int amount, int n)
{
	int* dp = new int[amount];
	for(int i=0; i<=amount; i++)
	{
		dp[i] = INT_MAX;
	}

	dp[0] = 0;

	for(int rupay=1; rupay<=amount; rupay++)
	{    	

		// iterate over coins
		for(int i=0; i<n; i++)
		{
			if(coins[i] <= rupay)
			{
				int smallerAns = dp[rupay - coins[i]];

				if(smallerAns != INT_MAX)
				{
					dp[rupay] = min(dp[rupay],smallerAns+1);
				}
			}
		}
	}
	return dp[amount];
}



int main() {

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int amount;
    cin>>amount;

    int coins[] =  {100,20,10,5,1};       

    //cout<<minBills(coins,amount,5)<<endl; 
    //

    cout<<coinsNeededDP(coins,amount,5)<<endl;

    return 0;
}




