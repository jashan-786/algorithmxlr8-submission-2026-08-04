#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {
        
        stack <int> st;
        st.push(-1);
        int counter=0;

        for( int i=0; i< s.length() ; i++){

            if( s[i] == '('){
                st.push(i);
            }else{
                st.pop();

                if(st.empty()){
                    st.push(i);
                }else{

                   counter= max(i-st.top(), counter);
                }
            }


        }
        return counter;
    }

int main() {
    string s;
    cin >> s;

    // Write your solution here.
    // Find the length of the longest contiguous substring that is a
    // valid (well-formed) parentheses sequence. A stack of indices,
    // seeded with -1 as a "base" sentinel, computes the current valid
    // run's length directly whenever a ')' successfully matches. Print
    // the length.
    cout << longestValidParentheses(s) << "";

    return 0;
}
