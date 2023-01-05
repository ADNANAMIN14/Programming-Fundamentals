#include <iostream>
#include <Windows.h>
using namespace std;
void gotoxy(int x,int y);
void printPlayer(int x,int y);
void printMaze();
 main (){
   system("cls");
   printMaze();
   int x = 3 , y = 3;
  while(true){
 printPlayer(x,y);
   if (y < 20){
   y = y + 1;
   }
   if(y==7){
    gotoxy(x,y-1);
    cout<<" ";
   y = 3;
   }
}
  }
void printMaze(){
cout<<"########################################"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"########################################"<<endl;
}
void printPlayer(int x,int y){
     gotoxy(x,y-1);
     cout<<" ";
     gotoxy(x,y);
     cout<<"P";
     Sleep(500);
     }
void gotoxy(int x,int y) {
   COORD coordinates;
   coordinates. X = x;
   coordinates. Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
   }    