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
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += numbers[i];
    }
    cout << sum << endl;
}