#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write you
    int stars = 1;
    int val = 1;
    int spaces = n/2;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=spaces; ++j){
            cout << "\t";
        }
        int cval = val;
        for(int j=1; j<=stars; ++j){
            cout << cval << "\t";
            if(j<=stars/2){
                cval++;
            }else{
                cval--;
            }
        }
 
        cout << endl;

        if(i<=n/2){
            stars += 2;
            spaces--;
            val++;
        }else{
            stars -= 2;
            spaces++;
            val--;
        }
    }
    
}
