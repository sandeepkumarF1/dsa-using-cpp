#include<iostream>
#include<vector>
using namespace std;

int RemoveDuplicateSorted(vector<int> arr){
    int i=0; 
    for(int j=1; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    // int myNumbers[5] = {8, 3, 6, 4, 5};
    vector<int> myNumbers{1, 1, 2, 3, 3, 4, 5, 5, 5};
    int output = RemoveDuplicateSorted(myNumbers);
    cout<<output;
}