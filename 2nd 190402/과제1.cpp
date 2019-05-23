#include<iostream>
using namespace std;

class A{
   int x;
public:
   void SetX(int i){
      x = i;
   }
   void ShowX(){
   cout << x << endl;
   }
};
class B:public A{
};

int main(){
   A a;
   a.SetX(10); 
   a.ShowX();
   B b;
   b.SetX(50);
   b.ShowX();
   return 0;
}
