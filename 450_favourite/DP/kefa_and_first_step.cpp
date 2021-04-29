#include<bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	int a[n];
	int cnt = 0,ans =1;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	for(int i=0; i<n; i++)
	{
		if(a[i]>=a[i-1])
		{
			cnt++;
			ans = max(cnt,ans);
		}
		else
		{
			cnt = 1;

		}
	}

	cout<<ans<<endl;
}
