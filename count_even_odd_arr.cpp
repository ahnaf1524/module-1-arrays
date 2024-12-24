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
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; ++i)
    {
        if (numbers[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout << "Even: " << evenCount << " , Odd: " << oddCount << endl;
    return 0;
}