#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    float a=5,b=6,c=1;
    float squreRoot,oneValue,secondValue ;
    squreRoot = sqrt(b*b - 4*a*c);
    oneValue = (-b +  squreRoot) / 2*a;
    secondValue = (-b -  squreRoot) / 2*a;
    cout<<"x =  "<<oneValue;
    cout<<"x =  "<<secondValue;
    return 0;


}
