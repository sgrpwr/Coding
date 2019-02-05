#include <bits/stdc++.h>
using namespace std;

struct test{
  string name;
  float marks;
  string subjects[2];
};

struct test obj[4]; 

void addvalue(int i){
  cout<<"In addvalue function"<<endl;
  cin>>obj[i].name>>obj[i].marks;
  for(int i=0; i<2; i++) cin>>obj[i].subjects[i];
}

int display(int n){
  cout<<"In display function"<<endl;
  cout<<obj[n].name<<endl<<obj[n].marks<<endl;
}

int main() {
  int n;
  cout<<"Enter number of students in main :"<<endl;
  //cin>>n;
  for(int i=0; i<4; i++) addvalue(i);
  cout<<"Which student do know marks of :"<<endl;
  cin>>n;
  display(n);
  }
