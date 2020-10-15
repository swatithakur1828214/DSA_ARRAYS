#include<iostream>
using namespace std;

void reversearray(int arr[], int n)
{

	int start=0,end =n-1;
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;



	}
}

void printarray(int arr[], int n)
{

	for(int i=0;i<n;i++)
	{
		cout<< arr[i]<<" " ;

	}

}
int main()
{

	int arr[] = {10,5,7,30};
	int n = sizeof(arr) / sizeof(arr[0]);
	reversearray(arr,n);
	printarray(arr,n);
	return 0;
}
