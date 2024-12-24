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
    int minValue = numbers[0];
    for (int i = 0; i < size; ++i)
    {
        if (numbers[i] < minValue)
        {
            minValue = numbers[i];
        }
    }
    int maxValue = numbers[0];
    for (int i = 0; i < size; ++i)
    {
        if (numbers[i] > maxValue)
        {
            maxValue = numbers[i];
        }
    }
    cout << "Min value is " << minValue << "\nMax Value is " << maxValue << endl;
    return 0;
}