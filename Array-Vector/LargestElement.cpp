#include <iostream>
#include<climits>
using namespace std;
int largestElement(int myNumbers[5])
{
    int maxNo =INT16_MIN;

    for (int i = 0; i < 5; i++)
    {
        maxNo = max(maxNo, myNumbers[i]);
    }
    return maxNo;
}

int main()
{
    int myNumbers[5] = {100, 200, 60, 40, 50};
    int output = largestElement(myNumbers);
    cout<<output;
}