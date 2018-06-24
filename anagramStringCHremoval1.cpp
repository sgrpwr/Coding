
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;
// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);
// Driver program to run the case
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        string str1="bcadeh",str2="hea";
        //cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
int arr1[CHARS]={0},arr2[CHARS]={0};
for(int i=0; str1[i]!='\0'; i++) arr1[str1[i]-'a']++;
for(int j=0; str2[j]!='\0'; j++) arr2[str2[j]-'a']++;
int out=0;
for(int i=0; i<26; i++) out +=  abs(arr1[i]-arr2[i]);
return out;

}