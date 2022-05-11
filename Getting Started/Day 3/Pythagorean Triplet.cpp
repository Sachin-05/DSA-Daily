#include <iostream>
using namespace std;

string solve(int a, int b, int c, int max){
    string s1 = "true";
    string s2 = "false";
    int temp=0;
    if(max==a){
        temp = (b*b+c*c==a*a);
        if(temp==1){
            return s1;
        }
    }
    else if(max==b){
        temp = (a*a + c*c == b*b);
        if(temp==1){
            return s1;
        }

    }else{
        temp = (a*a + b*b == c*c);
        if(temp==1){
            return s1;
        }
    }
    return s2;
}
int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    //write your code here
    // Deducing algorithm
    int max = a;
    if(b >= max){
        max = b;
    }
    if(c >= max){
        max =c;
    }

    cout << solve(a,b,c,max) << endl;
    
}
