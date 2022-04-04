// duplicate brackets

// learning is that if one elif condition is not working then reverse the elif condition and try again.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string ss;
    getline(cin, ss);
    string ans = "false";
    stack <char> st;
    for(int i=0; i<ss.length(); ++i){
        char ch = ss[i];
        if(ch==')'){
            if(st.top()=='('){
                 ans = "true";
               }else{
                 while(st.top()!='('){
                        st.pop();
                       }
                       st.pop();
               }
        }else{
        st.push(ch);
        }
    }
    cout << ans << endl;
}
