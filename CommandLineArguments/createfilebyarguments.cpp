#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]){
	ofstream file("CommandLineArguments.txt");
	string data;
	file<<argv[2];
	file<<data;
	return 0;
}