#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char data[200];
	ofstream out;
	out.open("abc.txt");
	cin>>data;
	out<<data;
	out.close();
	return 0;
}