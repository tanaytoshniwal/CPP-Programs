#include <iostream>
using namespace std;
template <class T> 
T Greater(T a,T b){
	return (a>b)?a:b;
}
int main(int argc, char *argv[]){
	int a,b;
	cin>>a>>b;
	cout<<Greater(a,b);
	float c,d;
	cin>>c>>d;
	cout<<Greater(c,d);
	return 0;
}