#include <iostream>
using namespace std;
void add(float number1,float number2);
void substract(float number1,float number2);
void multiply(float number1,float number2);
void division(float number1,float number2);
main ()
{
float number1,number2;
char choice;
while(true)
    {
cout<<"Enter First Number: ";
cin>>number1;
cout<<"Enter Second Number: ";
cin>>number2;
cout<<"Pick Your Choice (+,-,*,/) :  ";
cin>>choice;
  if (choice == '+')
    { 
	add(number1,number2);
    }
  if (choice == '-')
    {
	substract(number1,number2);
    }
  if (choice == '*')
    {
	multiply(number1,number2);
    }
  if (choice == '/')
   {
	division(number1,number2);
   }
}
}
void add(float number1,float number2)
   {
    float addition = number1 + number2;
     cout<<"Sum: "<<addition<<endl;
   }
void substract(float number1,float number2)
   {
     float substraction = number1 - number2;
     cout<<"Substraction: "<<substraction<<endl;
   }
void multiply(float number1,float number2)
   {
     float multiply = number1 * number2;
     cout<<"Multiply: "<<multiply<<endl;
   }
void division(float number1,float number2)
   {
     float division = number1 / number2;
     cout<<"Division: "<<division<<endl;
   }

