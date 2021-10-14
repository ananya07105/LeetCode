#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ksmallest(int arr[],int k,int size)
{
	sort(arr,arr+size);
	return arr[k-1];
}
int main()
{
	int sum=0;
	int arr[]={1,3,2,5,15,11};
	int size=sizeof(arr)/sizeof(arr[0]);
	int first=ksmallest(arr,3,size);
	cout<<first<<endl;
	int second=ksmallest(arr,6,size);
	cout<<second<<endl;
	for(int i=0;i<size;i++)
	   if(arr[i]>first && arr[i]<second)
	     sum+=arr[i];
	cout<<sum;
	return 0;
}
