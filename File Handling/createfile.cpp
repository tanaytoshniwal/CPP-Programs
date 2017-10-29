#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
	ofstream file("Student.txt");
	cout<<"Input your name";
	string data;
	getline(cin ,data);
	file<<data;
	return 0;
}