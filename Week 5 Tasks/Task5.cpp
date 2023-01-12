#include <iostream>
using namesapce std;
void myfunction(int value1, int value2, int value3, int value4, int value5);
main()
{
    int number,div,div1,div2,div3,value1,value2,value3,value4,value5;
    cout<< "enter five digits number:";
    cin>>number;
    value1 = number % 10;
    div = number / 10;
    value2 = div % 10;
    div1 = div / 10;
    value3 = div1 % 10;
    div2 = div1 / 10;
    value4 = div2 % 10;
    div3 = div2 / 10;
    value5 = div3 % 10;
    myfunction(value1, value2, value3, value4, value5);
}
void myfunction(int value1, int value2, int value3, int value4, int value5)
{
if ((value1 + value2 + value3 + value4 + value5) % 2 == 0)
{
    cout<< "Evenish";
}
if ((value1 + value2 + value3 + value4 + value5) % 2 != 0)
{
    cout<< "Oddish";
}
}
