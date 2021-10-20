#include <iostream>

using namespace std;

int maxSum(int arr[],int n,int k){
    int sum =0;
    
    for(int i=0;i<k;i++) //Preparing my window
    sum+=arr[i];
    
    //removing the last element and adding the next element 
    int curr_sum=sum;
    for(int i=k;i<n;i++){
        curr_sum+=arr[i]-arr[i-k];
        sum=max(sum,curr_sum);
    }
    return sum;
}
int main()
{
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}
