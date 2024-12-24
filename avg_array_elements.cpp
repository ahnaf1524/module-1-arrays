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
    int average = 0;
    for (int i = 0; i < size; ++i)
    {
        average += nums[i];
    }
    cout << (average / size) << endl;
    return 0;
}