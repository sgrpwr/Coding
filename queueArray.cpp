#include <iostream>
using namespace std;

void add(int arr[], int n, int &r, int &f, int x){
    if((r+1)%n == f){
        cout<<"Overflow";
        return;
    }
    if(r == -1){
        r++;
        f++;
    }
    else r = (r+1)%n;
    arr[r]=x;

}


void dlt(int arr[], int n, int &r, int &f){
    int x;
    if(f==-1){
        cout<<"Empty";
        return;
    }
    x = arr[f];
    if(r == f){
        r=-1;
        f=-1;
    }
    else{
        f=(f+1)%n;
    }
    cout<<x<<endl;
}


int main()
{
    int n=5,x,r=-1,f=-1;
    int arr[n];
    for(int i=0; i<n; i++){
            cin>>x;
            add(arr,n,r,f,x);
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    dlt(arr,n,r,f);6
    return 0;
}
