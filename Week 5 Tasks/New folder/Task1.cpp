#include <iostream>
using namespace std;
void pyramid(float length,float width,float height,string unit);
main()
{
    flaot length,width,height;
    string unit;
    cout<<"Enter width: ";
    cin>>width;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter Unit: ";
    cin>>unit;
    pyramid(length,width,height,unit);
}
void pyramid(float length,float width,float height,string unit)
{
    if (unit == "millimeters")
    {
        flaot result =  ((length * width * height) / 3 )*1000;
        cout<<"Volume: "<<result;
    }
    if (unit = "centimeters")
    {
    float  result =  ((length * width * height) / 3 )*100;
    cout<<"Volume: "<<result;
    }
    if (unit = "meters")
    {
     float result = (length * width * height) / 3;
     cout<<"Volume: "<<result;  
    }
}

