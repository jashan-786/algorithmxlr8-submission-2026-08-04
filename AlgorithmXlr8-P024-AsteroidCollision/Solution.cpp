#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> asteroids(n);

    for (int i = 0; i < n; i++) {
        cin >> asteroids[i];
    }

    stack<pair<int, int>> st;
    bool flag = true;

    for (int i = asteroids.size() - 1; i >= 0; i--) {
        flag = true;

        if (st.empty()) {
            st.push({i, asteroids[i]});
        } 
        else {
            // Same direction -> no collision
            if ((st.top().second >= 0 && asteroids[i] >= 0) ||
                (st.top().second <= 0 && asteroids[i] <= 0)) {

                st.push({i, asteroids[i]});
            } 
            else {
                // Collision can only happen when:
                // current asteroid is positive
                // right-side asteroid is negative
                while (!st.empty() &&
                       st.top().second < 0 &&
                       asteroids[i] > 0) {

                    if (abs(st.top().second) < abs(asteroids[i])) {
                        // Right-side asteroid explodes
                        st.pop();
                    } 
                    else if (abs(st.top().second) == abs(asteroids[i])) {
                        // Both explode
                        st.pop();
                        flag = false;
                        break;
                    } 
                    else {
                        // Current asteroid explodes
                        flag = false;
                        break;
                    }
                }

                // Current asteroid survived
                if (flag) {
                    st.push({i, asteroids[i]});
                }
            }
        }
    }

    if (!st.empty()) {
        while (!st.empty()) {
            cout << st.top().second << " ";
            st.pop();
        }
    } 
    else {
        cout << "(empty)";
    }

    return 0;
}