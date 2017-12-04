#include <iostream>
using namespace std;
class A{
  public:
    A(int a){
      cout<<"class a const called "<<a;
    }
};
class B:public A{
  public:
    B(int x):A(x){
      cout<<"class b const called "<<x;
    }
};
int main(){
  B obj(10);
  return 0;
}
