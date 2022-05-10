#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int cnt = 0;
    while(n!=0){
        cnt++;
        n = n/10;
    }
    //write your code here
    cout << cnt << endl;
    
}
