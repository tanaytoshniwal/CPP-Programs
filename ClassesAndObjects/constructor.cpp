#include <iostream>
using namespace std;
class Demo{
  public:
    int a;
    void print();
    Demo():a(10){}
    Demo(int a){
      Demo::a=a;
    };
};
void Demo::print(){
  cout<<a;
}
int main(){
  Demo d;
  Demo dd(69);
  d.print();
  dd.print();
}
