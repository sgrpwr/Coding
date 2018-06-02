#include <iostream>
using namespace std;

int main() {
  int  a,b,q=0,r=0;
  cout<<"Enter two numbers:"<<endl;
  cin>>a>>b;
  q=a/b;
  r=a%b;
  cout<<"Quetient:"<<q<<endl<<"Remender:"<<r;
  return 0;
}