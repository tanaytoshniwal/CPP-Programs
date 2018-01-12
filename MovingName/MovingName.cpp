#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
void move(int x, int y){
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main(){
	int X=10,Y=10;
	char ch;
	system("cls");
	move(X,Y);
	cout<<"Name";
	while(1){
		ch=getch();
		switch(ch){
			case 'a':{
				X--;
				break;
			}
			case 'w':{
				Y--;
				break;
			}
			case 's':{
				Y++;
				break;
			}
			case 'd':{
				X++;
				break;
			}
			case 27:{
				exit(0);
			}
		}
		system("cls");
		move(X,Y);
		cout<<"Name";
	}
	return 0;
}