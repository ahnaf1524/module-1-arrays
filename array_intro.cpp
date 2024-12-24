#include <iostream>
using namespace std;
int main()
{
    // bad approach
    int marks1 = 22;
    int marks2 = 34;
    int marks3 = 67;
    int marks4 = 67;
    int marks5 = 78;
    // good approach
    int marks[5] = {22, 34, 67, 67, 78};
    // int numbers[5]; // declared an array that holds 5 numbers
    int numbers[5] = {25, 35, 45, 55, 65};
    // partial initialization remaining are 0
    int numbers_arr[4] = {47, 25}; // {47 , 25 , 0 , 0 , 0}
    // automatic deduction
    int numbers_collection[] = {3, 5, 7};
    // cout << "First element is " << marks[0] << "\n";
    // cout << "Second  element of numbers is " << numbers[2] << "\n";
    // cout << "Partial Value " << numbers_arr[3];
    cout << "Before " << numbers[0] << endl;
    numbers[0] = 7;
    cout << "After " << numbers[0] << endl;

    return 0;
}