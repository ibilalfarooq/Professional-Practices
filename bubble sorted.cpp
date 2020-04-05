#include<iostream>
using namespace std;
int main()
{
	int n=0;
	int no=0;
	int temp=0;
	int arr[50];
	int i=0;
	int j=0;
	cout<<"Enter the no of elements you want in your array:";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"Enter the values in your array:";
	cin>>arr[i];
    }
{
    for(i=0;i<n;i++)
     for(j=0;j<n-1;j++)
     {
     	if(arr[j]>arr[j+1])
     	{
     		temp=arr[j];
     		arr[j]=arr[j+1];
     		arr[j+1]=temp;
		}
	}
cout<<"Your bubble sorted array is:";
for(i=0;i<n;i++)
{
	cout<<arr[i];
}		 
}
return 0;
}
