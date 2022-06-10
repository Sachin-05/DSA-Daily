#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
   int i=0;
   int j = s.length() - 1;
   while(i<j){
     if(s[i]!=s[j]){
       return false;
     }
     i++;
     j--;
   }
   return true;
}

void printallpalindrome(string str)
{
  //write your code here
  for(int i=0; i<str.length(); ++i){
    for(int j=1; i+j<=str.length(); ++j){
      string ss = str.substr(i,j);
      if(ispalindrome(ss)){
        cout << ss << endl;
      }
    }
  }
}

int main()
{
    string str;
    getline(cin,str);
    printallpalindrome(str);
    return 0;
}
