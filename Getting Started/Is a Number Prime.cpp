#include <iostream>
using namespace std;

string solve(int n){
    string s1 = "prime";
    string s2 = "not prime";

    if(n<=1){
        return s2;
    }

      for(int i=2; i*i<=n; ++i){
            if(n%i==0){
                return s2;
            }
        }
        return s1;
}

int main(int argc, char **argv){
    int t;
    cin >> t;
    while (t--)
    {
         int n;
         cin >> n;
         cout << solve(n) << endl;
    }
}
