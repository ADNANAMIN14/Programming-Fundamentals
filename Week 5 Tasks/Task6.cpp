#include<iostream>
using namespace std;
main ()
{
    int minutes,hours;
    cout<<"Inputs Hours: ";
    cin>>hours;
    cout<<"Input minutes: ";
    cin>>minutes;
    minutes = minutes + 15 
    if (minutes<=59)
    {
    cout<<"Your time after 15 mintues: "<<endl;
    cout<<hours <<":"<<minutes;
    }
    if (minutes>59)
    {
        hours= hours +1
    }