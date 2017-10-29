#include <iostream>
using namespace std;
double div(int a, int b){
	if(b==0)
		throw "Error!";
	return(a/b);
}
int main(int argc, char* argv[]){
	int a,b;
	cin>>a>>b;
	try{
		cout<<div(a,b);
	}
	catch(const char* str){
		cout<<str;
	}
	return 0;
}