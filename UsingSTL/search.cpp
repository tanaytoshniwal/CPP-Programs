#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int inputs1[] = { 1,2,3,4,5,6,7,8};
	int inputs2[] = { 2,3,4};
	vector<int> v1(inputs1, inputs1+9);
	vector<int> v2(inputs2, inputs2+3);
	vector<int>::iterator i ,j;
	i = search(v1.begin(), v1.end(), v2.begin(), v2.end());
	j = search(v1.begin()+2, v1.end(), v2.begin(), v2.end());
	return 0;
}