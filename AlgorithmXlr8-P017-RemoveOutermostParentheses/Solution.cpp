#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Write your solution here.
    // s is a valid parentheses string, decomposable into primitive
    // (independently balanced) pieces. Remove each piece's own
    // outermost pair of parentheses (a running nesting-depth counter
    // reveals exactly which characters those are). Print the result
    // (or "(empty)" if it fully cancels out).

    string res="";
    int depth=0;

    for( char ch: s){

        if( ch == '('){

            if(depth > 0)
            res+="(";

            depth++;
        }
        else if(  ch == ')' ){

             depth--;
            if( depth > 0)
            res+=")";
           

        }

    }

    cout << (res != "" ? res : "(empty)" )<< "";
    return 0;
}
