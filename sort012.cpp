#include<iostream>
using namespace std;
void sort012(int arr[], int n)
{

	int low = 0,  mid = 0;
	int high = n -1;




while(mid<=high)
{

	   switch(arr[mid])
	   {
	   	//element is 0
	case 0:
		swap(arr[low++],arr[mid++]);
		break;
		//element is 1
	case 1:
		mid++;
		break;

	case 2:
		swap(arr[mid], arr[high--]);
		break;

	   }
}
}
void printarr(int arr[], int n)
{

	for(int i=0;i<n;i++)


		cout<<arr[i];


}
int main()
{

	int arr[] = {1,0,0,0,0,1,1,1,1,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort012(arr,n);
	printarr(arr,n);
	return 0;
}






