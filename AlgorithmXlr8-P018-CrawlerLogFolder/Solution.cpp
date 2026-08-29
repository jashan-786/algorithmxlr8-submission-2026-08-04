#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> logs(n);
    for (int i = 0; i < n; i++) cin >> logs[i];

    // Write your solution here.
    // Track a folder-depth counter: "x/" increases depth by 1, "../"
    // decreases depth by 1 (never below 0), "./" leaves it unchanged.
    // Print the final depth (the minimum "../" moves needed to reach
    // the main folder).

    int depth=0;

    for( int i=0; i< n ; i++){

        if( logs[i] == "../"){
            if(depth >0)
            depth--;
        }
        else if( logs[i] !=  "./" ){
            depth++;
        }
    }

    cout << depth <<"";
    return 0;
}
