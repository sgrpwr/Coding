#include <bits/stdc++.h>
using namespace std;

void swap(char *a, char *b){
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int per(char* ch, int i, int n){
  static int count;
  if(i==n){
    count++;
    cout<<ch<<endl;
  }
  else{
    for(int j=i; j<=n; j++){
      swap((ch+i),(ch+j));
      per(ch,i+1,n);
      swap((ch+i),(ch+j));
    }
  }
}

int main() {
  char str[] = "ABC";
  int i=0,n=strlen(str);
  per(str,i,n-1);
}
