#include <iostream>
using namespace std;
main (){
int holidays,workingDays,timeForGames,hours,minutes,difference;
cout<<"Enter Number of Holidays: ";
cin>>holidays;
workingDays= 365 - holidays;
timeForGames = (holidays * 127) + (workingDays * 63);
difference = 30000 - timeForGames;
cout<<"Tom sleeps well"<<endl;
hours = difference / 60;
minutes = difference % 60;
cout<<" "<<hours<<" hours and "<<minutes<<" minutes " ;
} 