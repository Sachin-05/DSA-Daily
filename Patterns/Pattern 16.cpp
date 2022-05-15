#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here

    int spaces = (n*2)-3;

    for(int i=1; i<=n; ++i){
        for(int j=1; j<=i; ++j){
            cout << j << "\t";
        }

        // now for spaces;

        for(int j=spaces; j>0; j --){
            cout << "\t";
        }

        if(i==n){
            for(int j=i-1; j>=1; j--){
                cout << j << "\t";
            }
        }else{
        for(int j=i; j>=1; j--){
            cout << j << "\t";
        }
        }
        spaces -= 2;
        cout << endl;
    }

}
