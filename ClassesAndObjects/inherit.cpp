#include <iostream>
using namespace std;
class A{
  public:
    A(){
      cout<<"class a const called"<<endl;
    }
};
class B:public A{
  public:
    B(){
      cout<<"class b const called"<<endl;
    }
};
int main(){
  B obj;
}
