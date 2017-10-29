#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;
void fun1(int x)
{
	cout << ++x << " ";
}
int main()
{
	int arr[] = {11, 21, 4, 13};
	for_each(arr, arr + 4, fun1);
	cout << endl;
	return 0;
}