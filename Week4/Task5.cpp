#include <iostream>
using namespace std;
void isEqual(int number1,int number2);
void maximum(int number1,int number2);
void minimum(int number1,int number2);
main ()
{
while(true)
	{
           int number1, number2, choice;
           cout<<"Enter First Number: "; 
           cin>>number1;
           cout<<"Enter Second Number: ";
           cin>>number2;
           isEqual(number1, number2);
	   cout<<"Enter Choice (1-3): ";
	   cin>>choice;
 if (choice == 1 )
	{
	maximum (number1,number2);
	}
if (choice == 2)
	{
        minimum(number1,number2);
	}
if (choice == 3)
	{
        isEqual(number1,number2);
	}
        }
}
void minimum (int number1, int number2)
  {
     if (number1<number2)
	{
	    cout<<"Smaller Number is "<<number1<<endl;
	}
     if (number2<number1)
	{ 
   	   cout<<"Smaller Number is "<<number2<<endl;
	}
  }
void maximum (int number1, int number2)
  {
     if (number1>number2)
	{
	    cout<<"Greater Number is "<<number1<<endl;
	}
     if (number2>number1)
	{ 
   	   cout<<"Greater Number is "<<number2<<endl;
	}
  }
void isEqual (int number1, int number2)
  {
     if (number1!=number2)
	{
	    cout<<"Numbers are not Equal "<<endl;
	}
     
     if(number1=number2)
	{
          cout<<"Numbers are Equal"<<endl;
	} 
  }