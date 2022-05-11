#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here

    int nsp = n-1; //number of spaces;
    int nst = 1; // number of stars;

    for(int i=1; i<=n; ++i){
        for(int j=1; j<=nsp; j++){
            cout << "\t";
        }
        for(int j=1; j<=nst; j++){
            cout << "*\t";
        }
        nsp--;
        nst++;
        cout << endl;
    }
    
}
