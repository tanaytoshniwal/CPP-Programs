#include <iostream>
using namespace std;
union bakchodi_1{
  int no;
  char harkat[100];
  char ohlala;
};
struct bakchodi_2{
  int no;
  char harkat[100];
  char ohlala;
};
int main() {
  bakchodi_1 lassan1;
  bakchodi_2 lassan2;
  cout<<sizeof(lassan1);
  cout<<endl<<sizeof(lassan2);
  return 0;
}
