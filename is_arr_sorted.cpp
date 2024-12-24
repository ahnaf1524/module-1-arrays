#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> numbers[i];
    }
    int maxElement = numbers[0];
    bool isSorted;
    for (int i = 0; i < size; ++i)
    {
        if (numbers[i] > maxElement)
        {
            isSorted = true;
        }
        else
        {
            isSorted = false;
        }
    }
    if (isSorted == 1)
    {
        cout << "true" << endl;
        return 0;
    }
    cout << "false" << endl;
    return 0;
}