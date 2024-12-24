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
    int start = 0, end = size - 1;
    while (start < end)
    {
        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temp;
        start++;
        end--;
    }
    // print
    for (int i = 0; i < size; ++i)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}