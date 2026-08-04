#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> gain(n);
    for (int i = 0; i < n; i++) cin >> gain[i];

    // Write your solution here.
    // Print the highest altitude reached, starting from altitude 0 and
    // applying each net gain in order.
    int maxH= 0;
    int curr=0;
    for(int i=0; i<n ; i++){
        curr+= gain[i];
        maxH= max(maxH, curr);
    }

    cout << maxH << "";

    return 0;
}
