#include<iostream>
#include<vector>
using namespace std;
bool ArraySortedAndRotated(vector<int> arr){
    int count = 0;
    for(int i=1; i< arr.size(); i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[arr.size()-1] > arr[0]){
        count++;
    }
    return count<=1;
}
int main()
{
    // int myNumbers[5] = {8, 3, 6, 4, 5};
    vector<int> myNumbers{4, 5, 6, 2, 3};
    bool output = ArraySortedAndRotated(myNumbers);
    cout<<output;
}