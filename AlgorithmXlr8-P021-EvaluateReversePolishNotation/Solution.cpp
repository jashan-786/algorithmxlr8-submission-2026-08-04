#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> tokens(n);
    for (int i = 0; i < n; i++) cin >> tokens[i];

    // Write your solution here.
    // Evaluate the postfix (Reverse Polish Notation) expression using a
    // stack: numbers push directly; an operator pops b then a, and
    // pushes (a OP b). Division truncates toward zero. Print the final
    // result.

    stack <int> st;

    for(int i=0; i< n ; i++ ){

        if( tokens[i] == "/" ||  tokens[i] == "-"  || tokens[i] == "*" || tokens[i] == "+"){
            if(!st.empty()){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    if(tokens[i] == "/")
                    st.push( b / a );
                    else if (  tokens[i] == "-"  )
                    st.push( b -a);
                    else if (tokens[i] == "*" )
                    st.push(b * a);
                    else
                    st.push(b + a);

            }

        }else{
        st.push(stoi(tokens[i]));
        }
    }

    cout << st.top() << "";

    return 0;
}
