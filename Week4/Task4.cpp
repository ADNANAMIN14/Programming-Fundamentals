#include <iostream>
using namespace std;
void minimum(int number1,int number2);
main ()
{
while(true)
	{
           int number1, number2;
           cout<<"Enter First Number: "; 
           cin>>number1;
           cout<<"Enter Second Number: ";
           cin>>number2;
           minimum(number1, number2);
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
     if(number1=number2)
	{
cout<<"Numbers are Equal"<<endl;
	} 
  }