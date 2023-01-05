#include <iostream>
using namespace std;
void isEqual(int number1, int number2);
main ()
{
 int number1,number2;
 cout<<"Enter first number: ";
 cin>>number1;
 cout<<"Enter second number: ";
 cin>>number2;
 isEqual(number1,number2);
}
void isEqual(int number1, int number2){
  if (number1 == number2){
   cout<<"True";
}
  if (number1 != number2){
  cout<<"False";
}
}