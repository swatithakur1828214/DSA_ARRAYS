/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<algorithm>
#include <iostream>

using namespace std;
int ksmallest(int arr[], int n, int k)
{
    sort(arr, arr+n);    //sorts in accnding order
    return arr[k-1];
}
int klargest(int arr[], int n, int k)
{
    sort(arr,arr+n,greater<int>()); //decending order ->sorting
    return arr[k-1];
}
int main()
{
    int arr[] = {10,2,3,30,40,50,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k =1;
    cout << "K'th smallest element is " << ksmallest(arr, n, k); 
    cout << "K'th largest element is " << klargest(arr, n, k); 
    return 0; 


}
