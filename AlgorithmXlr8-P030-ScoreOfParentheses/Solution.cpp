#include <bits/stdc++.h>
using namespace std;

int scoreOfParentheses(string s) {

        int total = 0;
        int level = 0;
       

        char open = '(';

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == open) {
                ++level;
            } else {

               --level;
               if (s[i - 1] == '(') {
                    total += (1 << level);
                }

            }
        }
        return total;
    }

int main() {
    string s;
    cin >> s;

    // Write your solution here.
    // "()" scores 1; "AB" scores A + B; "(A)" scores 2*A. Use a stack
    // where each nesting level accumulates its own score: '(' pushes
    // a fresh 0; ')' pops the level's value v, resolves it (1 if
    // v==0, else 2*v), and adds that into the new top (its parent
    // level). Print the final score.

    int res= scoreOfParentheses(s);
    cout << res <<"";
    

    return 0;
}
