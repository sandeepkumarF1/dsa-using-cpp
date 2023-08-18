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
int sortingLargest(int arr[5]){
    int temp =0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i = -1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
        cout<<"max No."<<arr[5-1]<<endl;
    
    
}
int main()
{
    int myNumbers[5] = {8, 3, 6, 4, 5};
    int output1 = secondLargest(myNumbers);
    int output2 = sortingLargest(myNumbers);
    cout<<output2;
}