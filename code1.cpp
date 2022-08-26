// Ishita Gandotra
//2010990318
//code 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Enter the length of the array.
    int size;
    cin>>size;
    int arr[size];


    // Input the elements of the array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


    // sorting the array to make finding the non-repeated number less time consuming
    sort(arr,arr+size);
    for(int i=size-1;i>=0;i--){

        // comparing the elements of array to check for repeating elements
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){

            // printing the output

            cout<<arr[i]<<" ";
        }
    }

    return 0;
}