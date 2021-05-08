#include<iostream>
#include<vector>

using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define endl "\n"
#define PI 3.1415926535897932384626

const int mod = 1000000007;
//==============================
	//https://atcoder.jp/contests/dp/tasks/dp_b link to problem
//==============================

void solve()
{
	ll n,k;

	cin>>n;
	cin>>k;
	vector<ll>h(n);
	for(int i=0; i<n; i++)
		cin>>h[i];

	vector<ll>dp(n,mod);

	dp[0] = 0;

	for(ll i=0; i<n; i++)
	{
		for(ll j=i+1; j<=i+k; j++)
		{
			if(j<n)
			{
				dp[j] = min(dp[j],dp[i]+abs(h[i]-h[j]));
			}
		}
	}

	cout<<dp[n-1]<<endl;  
   
}


int main()
{
	
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    solve();
   

    return 0;
}



