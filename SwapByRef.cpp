#include <iostream>
using namespace std;

void fun(int *x, int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a=9,b=3;
  int *ptr = &a;
  cout<<a<<" "<<b<<endl;
  fun(&a,&b);
  cout<<a<<" "<<b;
}
