#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	  int n,n1,n2,flag=0;
	  cin>>n1>>n2;
      if(n1>=n2) n=n1;
      else n=n2;
      int arr[n]={0};
	    //cin>>n1>>n2;
	    int arr1[n1],arr2[n2];
	    for(int i=0;i<n1;i++) cin>>arr1[i];
	    for(int i=0;i<n2;i++) cin>>arr2[i];
	    for(int i=0;i<n1;i++){
	        for(int j=0;j<n2;j++){
	            if(arr1[i]==arr2[j]){
	                flag=1;
	                arr[j]=arr2[j];
	            }
	        }
	    }
      sort(arr,arr+n);
      for(int i=0;i<n;i++){
        if(arr[i]!=0&&flag==1) cout<<arr[i]<<" ";
      }
      if(flag==0) cout<<"Zero"; 
      cout<<endl;
	}
	return 0;
}