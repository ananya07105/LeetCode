#include<iostream>
using namespace std;
int subsetSum(int a[],int n,int sum)
{
	int dp[n+1][sum+1];
	dp[0][0]=1;
	for(int i=1;i<=sum;i++)
	  dp[0][i]=0;
	for(int i=1;i<=n;i++)
	  dp[i][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(a[i-1]<=j)
			  dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i-1]];
			else
			  dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}
int countWithGivenSum(int arr[],int n,int diff)
{
	int sum=0;
	for(int i=0;i<n;i++)
	  sum+=arr[i];
	int reqSum=(diff+sum)/2;
	return subsetSum(arr,n,reqSum);
}
int main(){
	int arr[]={1,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int diff=1;
	int ans=countWithGivenSum(arr,n,diff);
	cout<<ans<<endl;
	return 0;
}
