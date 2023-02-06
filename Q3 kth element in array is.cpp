//find the kth max and min element in array 
#include<iostream>
#include<algorithm>

using namespace std;
void array(int arr[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	 sort(arr,arr+n);
	 
	 cout<<" the k th  minimum element in array is "<<arr[k-1]<<endl<<"the kth maximum element in array is  "<<arr[n-k];
}
main()
{
	int arr[100];
	int n;
	cout<<"size of an array ";
	cin>>n;
	int  k;
	cout<<endl<<"kth element in array ";
	cin>>k;
	array(arr,n,k);
	
}
