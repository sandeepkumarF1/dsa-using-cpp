#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int arr[5]){
    int maxNo = INT_MIN;
    int secL = INT_MIN;
    // int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i< 5; i++){
        if(arr[i] > maxNo){
            secL = maxNo;
            maxNo = arr[i];
        }
    }
    return secL;
}
// int sortingLargest(int)
int main()
{
    int myNumbers[5] = {100, 200, 60, 40, 50};
    int output = secondLargest(myNumbers);
    cout<<output;
}