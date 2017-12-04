#include <iostream>
using namespace std;
class Demo{
  private:
    int data;
  public:
    Demo(int data){
      Demo::data=data;
    }
    void print(){
      cout<<data;
    }
};
int main(){
  Demo d(10);
  d.print();
}
