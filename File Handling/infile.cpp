#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream inp;
	char data[200];
	inp.open("abc.txt");
	inp>>data;
	cout<<data;
	return 0;
}