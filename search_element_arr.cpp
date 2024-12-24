#include <iostream>
using namespace std;
int main()
{
    int target;
    cin >> target;
    int arr[10] = {
        10,
        20,
        30,
        40,
        50,
        60,
        70,
        80,
        90,
        100,
    };
    bool isFound = false;
    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] == target)
        {
            cout << target << " Found at " << i << " position\n";
            isFound = true;
            break;
        }
    }
    if (!isFound)
    {
        cout << target << " not found!" << endl;
    }
    return 0;
}