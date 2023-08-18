#include<iostream>
using namespace std;
int pairSum(int arr[]){
    for(int i=0; i<=arr.size(); i++){
        cout<<i;
    }
    
}
main(){
    int arr[] = {10,5,2,3,-6,9,11};
    int output = pairSum(arr);
    cout<<output;
}

