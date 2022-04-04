// stacks basic operations 
// stack is not defined in c++14
// but defined in c++17 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> st;
    for(int i=1; i<=5; ++i){
        int a;
        cin >> a;
        st.push(a);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

// task :: To study about the implementation of the stacks and it's operations.
