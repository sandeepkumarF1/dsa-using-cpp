#include<iostream>
#include<vector>
using namespace std;
vector<int> RotateArray(int k, vector<int> arr){
    vector<int> temp(arr.size());
    for(int i=0; i<arr.size(); i++){
        temp[(i+k) % arr.size()] = arr[i];
    }
    arr = temp;
    return arr;
}
int main()
{
    // int myNumbers[5] = {8, 3, 6, 4, 5};
    vector<int> myNumbers{4, 5, 3, 6, 7};
    vector<int> output = RotateArray(2, myNumbers);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
}