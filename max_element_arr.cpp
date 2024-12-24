#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int nums[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> nums[i];
    }
    int maxVal = nums[0];
    for (int i = 0; i < size; ++i)
    {
        if (nums[i] > maxVal)
        {
            maxVal = nums[i];
        }
    }
    cout << maxVal << endl;
    return 0;
}