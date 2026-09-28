#include <bits/stdc++.h>
using namespace std;

    string simplifyPath(string path) {

        stack<string> st;
        stringstream ss(path);

        string token;
        string ans = "";

        while (getline(ss, token, '/')) {

            if (token == "" || token == ".") {
                continue;
            }
            else if (token == "..") {

                if (!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(token);
            }
        }

        while (!st.empty()) {
            ans = st.top() + "/" + ans;
            st.pop();
        }

        if (!ans.empty()) {
            ans.pop_back();
        }

        ans = "/" + ans;

        return ans;
    }

int main() {
    string path;
    cin >> path;

    // Write your solution here.
    // Convert path to its simplified canonical form: split on '/',
    // skip empty segments and '.', pop the stack on '..' (if not
    // empty), push any other token as a directory name. Print the
    // result, starting with '/'.

    string res="";
    res=simplifyPath(path);
    cout << res <<"";


    return 0;
}
