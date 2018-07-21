#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=9,temp,flag,count=0;
  int arr[9]={9,8,7,6,5,4,3,2,1};
  for(int i=0; i<n; i++){
    flag=0;
    for(int j=0; j<n-1-i; j++){
      if(arr[j]>arr[j+1]){
        flag=1;
        temp=arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp; 
      }
      //count++;
    }
    if(flag==0) break;
  }
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
  //cout<<count;
  return 0;
}