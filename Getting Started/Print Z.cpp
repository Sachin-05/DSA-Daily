#include<iostream>
using namespace std;
int main(int argc, char** agrc){
    //write your code here
    for(int i=0; i<5; ++i){
        cout << "*";
    }
    cout << endl;
    for(int i=0; i<3; ++i){
        for(int j=3-i; j>0; j--){
            cout << " ";
        }
        cout << "*\n";
    }
    for(int i=0; i<5; ++i){
        cout << "*";
    }
}
