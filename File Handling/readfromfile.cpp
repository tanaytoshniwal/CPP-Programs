#include <fstream>
#include <iostream>
using namespace std;
int main() {
	char ch;
	ifstream infile("Student.txt");
	while( infile )
	{
		infile.get(ch);
		cout << ch;
	}
	cout << endl;
	return 0;
}