//Q2 find the maximum and minimum element in array
#include<iostream>
#include<climits>
using namespace std;
void maxarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
    int largest=INT_MAX;
    int smallest=INT_MIN;
		for(int i=0;i<size;i++)
	{
		
		if(smallest<arr[i])
		{
			smallest=arr[i];
		}
			if(largest>arr[i])
		{
			largest=arr[i];
		}
		
	}
	cout<<"largest element in array is "<<smallest<<endl;
	cout<<"smallest element in array is "<<largest;

}
main()
{
	int arr[100];
	int n;
	cin>>n;
	maxarray(arr,n);
	
}
