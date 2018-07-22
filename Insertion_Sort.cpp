//Insertion Sort
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
  int temp,i,j;
  for(i=1; i<n; i++){
    temp=arr[i];
    for(j=i-1; j>=0 && temp<arr[j]; j--) arr[j+1] = arr[j];
    arr[j+1] = temp;
  }
}

int main(){
  int n=5, LOC, temp;
  int arr[] = {34,11,67,8,19};
  insertion_sort(arr,n);
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
  return 0;
}