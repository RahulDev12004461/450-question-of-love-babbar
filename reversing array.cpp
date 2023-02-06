//love babbar 1tst question reversing the array 
#include<iostream>
using namespace std;
void reversearray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int i=0;
	int j=size-1;
	while(i<j)
	{
		swap(arr[i],arr[j]);
		
		i++;
		j--;
	}
		for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
main()
{
	int arr[100];
	int n;
	cin>>n;
	reversearray(arr,n);
	
}
