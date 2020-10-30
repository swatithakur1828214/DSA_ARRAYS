#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}


void shiftarr(int arr[], int low, int high)
{

	while(low<=high)
	{

		if(arr[low]<0 &&arr[high]>0)
		{

			low +=1;
		}
		else if(arr[low]>0 && arr[high]<0)
		{

			swap(arr[low++], arr[high--]);

		}
		else if(arr[low]>0 && arr[high]>0)
		{

			high -=1;
		}
		else{
			low++;
			high--;
		}
	}
}

int main()
{

	int arr[] = {-12, 11, -13, -5,
               6, -7, 5, -3, 11};
	int n = sizeof(arr)/ sizeof(arr[0]);
	shiftarr(arr,0,n-1);
	printArray(arr, n);
    return 0;

}
