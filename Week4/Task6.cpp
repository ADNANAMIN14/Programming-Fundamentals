#include <iostream>
using namespace std;
void calculateBill(string day, int amount);
main ()
{
string day;
int amount;
cout<<"Enter Day: ";
cin>>day;
cout<<"Enter Total Bill: ";
cin>>amount;
calculateBill(day,amount);
}
void calculateBill(string day, int amount)
   {
     if (day == "sunday")
	{
	  int discount1 = (amount * 10 )/ 100;
	  int total1 = amount - discount1;
	  cout<<"Your Payable Amount: "<<total1;
	}
     if ( day != "sunday")
	{
	  int discount2 = (amount * 5) / 100;
	  int total2 = amount - discount2;
	  cout<<"Your Payable Amount: "<<discount2;
	}
   }	
