//Selection Sort
#include <bits/stdc++.h>
using namespace std;

int min(int arr[], int i, int n){
  int min=arr[i],loc=i;
  for(int j=i+1; j<n; j++){
    if(min>arr[j]){
      min = arr[j];
      loc = j;
    }
  }
  return loc;
}

int main(){
  int n=5, LOC, temp;
  int arr[] = {34,11,67,8,19};
  for(int i=0; i<n-1; i++){
    LOC = min(arr,i,n);
    temp = arr[i];
    arr[i] = arr[LOC];
    arr[LOC] = temp;
  }
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
  return 0;
}