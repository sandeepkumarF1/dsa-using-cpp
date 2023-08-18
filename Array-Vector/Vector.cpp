#include<iostream>
#include<vector>
using namespace std;
main(){
    vector<int> arr(10,4);
    arr.pop_back();
    arr.push_back(6);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
}