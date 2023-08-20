#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int secondLargest(vector<int> a, int n){
    int largest = a[0];
    int sLargest = -1;
    for(int i=1; i<n; i++){
        if(a[i]>largest){
            sLargest = largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>sLargest){
            sLargest = a[i];
        }
    }
    return sLargest;
}
int secondSmallest(vector<int> a, int n){
    int smallest = a[0];
    int sSmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(a[i] < smallest){
            sSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] =! smallest && a[i] < sSmallest){
            sSmallest = a[i];
        }
    }
    return sSmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int sLargest = secondLargest(a, n);
    int sSmallest = secondSmallest(a, n);
    return {sLargest, sSmallest};
}
int main()
{
    // int myNumbers[5] = {8, 3, 6, 4, 5};
    vector<int> myNumbers{4, 5, 3, 6, 7};
    vector<int> output = getSecondOrderElements(5, myNumbers);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
}