#include <iostream>
using namespace std;
main (){
float redRoseNo,whiteRoseNo,tulipsNo,redRosePrice,whiteRosePrice,tulipsPrice,totalPrice,discount,priceWithDiscount;
cout<<"Enter the number of Red Roses: ";
cin>>redRoseNo;
cout<<"Enter the number of White Roses: ";
cin>>whiteRoseNo;
cout<<"Enter the number of Tulips Roses: ";
cin>>tulipsNo;
redRosePrice = redRoseNo * 2;
whiteRosePrice = whiteRoseNo * 4.10;
tulipsPrice = tulipsNo * 2.50;
totalPrice = redRosePrice + whiteRosePrice + tulipsPrice;
cout<<"Original Price: "<<totalPrice<<endl;
if (totalPrice > 200 ){
   discount = (totalPrice * 20) / 100;
   priceWithDiscount = totalPrice - discount;
   cout<<"Price after Discount: "<< priceWithDiscount;
    }
}
