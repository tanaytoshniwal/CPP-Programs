#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc,char *argv[]){
	vector<int> v;
	cout<<"Input n:";
	int n;
	cin>>n;
	cout<<"Input numbers:";
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}