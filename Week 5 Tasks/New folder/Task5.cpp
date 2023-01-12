#include <iostream>
using namespace std;
main ()
{
    float hours,days,workers,percentage,requireDays,totalhours,totalhours1, hoursleft;
    cout<<"Hours require to work: ";
    cin>>hours;
    cout<<"Enter the days: "
    cin>>days;
    cout<<"Enter the workers: ";
    cin>>workers;
    percentage = (days * 10)  / 100;
    requireDays = days - percentage;
    totalhours = workers * 10;
    totalhours1 = totalhours *  requireDays;
    hoursleft = totalhours1 - hours;
    cout<<hoursleft<<"hours left.";
}