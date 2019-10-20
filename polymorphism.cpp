#include <iostream>
using namespace std;
class A {
public:
  virtual void disp(){
     cout<<"Super Class Function"<<endl;
  }
};
class B: public A{
public:
  void disp(){
     cout<<"Sub Class Function";
  }
};
int main() {
    A obj2;
    B obj1;
 A *ptr;
 ptr =& obj2;
 ptr->disp();
 ptr =& obj1;
 ptr->disp();
  return 0;
}
