#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the running sum of nums, space-separated.
    int sum=0;
    for(int i=0; i<n ; i++){
        sum+= nums[i];
        cout << sum << " ";

    }
    return 0;
}
