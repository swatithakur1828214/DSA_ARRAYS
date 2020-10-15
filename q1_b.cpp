#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[], int start, int end)
{

	//int start, end=n-1;
	if(start>=end)
		return;

	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;

	reversearray(arr,start+1,end-1);
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
	reversearray(arr,0,3);
	printarray(arr,n);
	return 0;
}
