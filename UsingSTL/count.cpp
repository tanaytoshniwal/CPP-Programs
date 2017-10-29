#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{
	int values[] = {1,2,3,5,4,6,2,5,1,4,5,9,5,5,5};
	int c5 = count(values, values+15, 5);
	cout<<c5<<endl;
	vector<int> v(values, values+15);
	int c1 = count(v.begin(), v.end(), 1);
	cout<<c1;
	return 0;
}