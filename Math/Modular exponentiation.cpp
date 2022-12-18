// modular exponentitaion

#include <iostream>

using namespace std;

int main()
{
    /*
     int a, b;
     cin >> a >> b;
     int res=1;

     while(b>0){
        if((b&1)!=0){
            res = res*a;
        }
        a= a*a;
        b = b>> 1; // right shift se half se divdide aur left shift se multiply by 2;

     }
     cout << res << endl;
*/

  // now if we have asked to compute the a^b%n;
 // and here we have did the modular exponentitaion
 
  long a,b;
  int n = 1000000007;
  cin >> a >> b;

  long res=1;

  while(b>0){
    if((b&1)!=0){
        res = (res%n * a%n)%n;
    }
    a = (a%n * a%n)%n;
    b = b>>1;
  }
  cout << res << endl;
}
