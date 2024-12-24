#include <iostream>
using namespace std;
void countFrequency(int arr[], int n)
{
    int freq[100] = {0};
    for (int i = 0; i < n; ++i)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < 100; ++i)
    {
        if (freq[i] > 0)
        {
            cout << i << " : " << freq[i] << " , ";
        }
    }
}
int main()
{
    int numbers[] = {1, 2, 2, 3, 3, 3};
    // dynamical length below
    int len = sizeof(numbers) / numbers[0];
    countFrequency(numbers, len);
    return 0;
}