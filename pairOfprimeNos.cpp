#include <bits/stdc++.h>
using namespace std;

void primeOrnot(int n){
  bool prime[n+1];
  memset(prime, true, sizeof(prime));
  for(int p=2; p*p<=n; p++){
    if(prime[p]==true)
      for(int i=p*2; i<=n; i=i+p)
        prime[i] = false;
  }
  for(int p=2; p<=n; p++)
   for(int i=2; i<=n; i++)
    if(prime[p]&&prime[i]&&p*i<=n)
      cout<<p<<" "<<i<<" ";
}

int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
        primeOrnot(n);
        cout<<endl;
	}
	return 0;
}