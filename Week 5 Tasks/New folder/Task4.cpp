#include <iostream>
using namespace std;
void taxCalculator(char type, float price)
{
    if (type == 'M')
    {
        float taxAmount = (price * 6)/100;
        float finalPrice = price + taxAmount;
        cout<<"Price: "<<finalPrice; 
    }
    if (type == 'E')
    {
        float taxAmount = (price * 8)/100;
        float finalPrice = price + taxAmount;
        cout<<"Price: "<<finalPrice; 
    }
    if (type == 'S')
    {
        float taxAmount = (price * 10)/100;
        float finalPrice = price + taxAmount;
        cout<<"Price: "<<finalPrice; 
    }
    if (type == 'V')
    {
        float taxAmount = (price * 12)/100;
        float finalPrice = price + taxAmount;
        cout<<"Price: "<<finalPrice; 
    }
    if (type == 'T')
    {
        float taxAmount = (price * 15)/100;
        float finalPrice = price + taxAmount;
        cout<<"Price: "<<finalPrice; 
    }
}
main ()
{
    char type;
    float price;
    cout<<"Enter the Vehical Code: ";
    cin>> type;
    cout<<"Enter the Price of Vehical: ";
    cin>>price;
    taxCalculator(type, price);
}