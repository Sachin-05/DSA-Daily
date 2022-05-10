#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int temp = n;
    int div =10;
    while(temp!=0){
        int rem = temp%div;
        cout << rem << endl;
        temp = temp / div;
    }
}
