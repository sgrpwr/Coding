
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;
// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
void remAnagram(string str1, string str2);
// Driver program to run the case
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        string str1="dnsjbvhsvdshbvbshdbvsd",str2="vjbdshvsdkbvhsdkvcdsv";
        //cin>>str1>>str2;
        remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
void remAnagram(string str1, string str2)
{
  int count=0;
// Your code goes here
sort(str1.begin(), str1.end());
sort(str2.begin(), str2.end());
//cout<<str1.size();
for(int i=0; i<str2.size();i++){
  for(int j=0; j<str1.size();j++){
    if(str2[i]==str1[j]){
      count++;
      continue;
    }
  }
}
cout<<str1.size()-count;
//cout<<str1<<" "<<str2;
}