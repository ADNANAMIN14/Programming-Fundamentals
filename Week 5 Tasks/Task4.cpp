#include <iostream>
using namespace std;
void isSymmetrical(int value1, int value3);
main()
{
    int number, div, div1, value1, value2, value3;
    cout << "Enter three digits number:";
    cin >> number;
    value1 = number % 10;
    div = number / 10;
    value2 = div % 10;
    div1 = div / 10;
    value3 = div1 % 10;
    isSymmetrical(value1,value3);
}
void isSymmetrical(int value1, int value3)
{

    if (value1 == value3)
    {
        cout << "True";
    }
    if (value1 != value3)
    {
        cout << "False";
    }
}
