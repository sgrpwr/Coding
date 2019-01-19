/* Program created by Sagar Pawar at 19 Jan 2019 */
#include<bits/stdc++.h>
using namespace std;

void add(){
  int a=23, b=34, sum;
  sum=a+b;
  cout<<sum;
}

void largest(){
  int a=5, b=1, c=-9, l=0;
  if(a>b&&a>c) l=a;
  else if(b>a&&b>c) l=b;
  else l=c;
  cout<<"Largest number is: "<<l;
}

void root(){
  int a=5,b=3,c=4,d,r1,r2,r,i;
  d=b*b-4*a*c;
  if(d>=0){
    r1 = (-b+sqrt(d))/2*a;
    r2 = (-b-sqrt(d))/2*a;
    cout<<r1<<endl<<r2;
  }
  else{
    r = b/(2*a);
    i = sqrt(-d)/(2*a);
    cout<<r<<" +i"<<i<<endl<<r<<" -j"<<i;
  }
}

void fact(){
  int n=5, fact=1, i=1;
  while(i<=n){
    fact=fact*i;
    i++;
  }
  cout<<fact;
}

void prime(){
  int n=15,i,flag=0;
  for(int i=2; i<=n/2; ++i){
    if(n%i==0){
      flag=1;
      break;
    } 
  }
  if(n==1) cout<<"Number was composite";
  else{
    if(flag==0) cout<<"Number was prime";
    else cout<<"Number was not prime";
  }
}

void fibonacci(){
  int n=6,v1=1,v2=1,sum=1;
  cout<<v1<<" "<<v2<<" ";
  for(int i=1;i<=n;i++){
    sum = v1+v2;
    v1 = v2;
    v2 = sum;
    cout<<v2<<" ";
  }
}

int main(){
  //add();
  //largest();
  //fact();
  //root();
  //prime();
  fibonacci();
}
