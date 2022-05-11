#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int nst = n; // number of stars
    int nsp = 0; // number of spaces

    for(int i=1; i<=n; ++i){
        for(int j=1; j<=nsp; j++){
            cout << "\t";
        }

        for(int j=1; j<=nst; j++){
            cout << "*\t";
        }

        nsp++;
        nst--;
        cout << endl;
    }

}
