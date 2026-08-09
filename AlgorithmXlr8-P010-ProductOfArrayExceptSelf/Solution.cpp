#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print an array where each position holds the product of every other
    // element, without using division, space-separated.

    vector <int> prefix(n);
    vector <int> suffix(n);

    vector <int> ans(n);
    prefix[0]= nums[0];
    suffix[n-1]= nums[n-1];

    for(int i=1; i < n ; i++){
        prefix[i]= nums[i] * prefix[i-1];

    }

     for(int i=n-2; i>=0 ; i--){
        suffix[i]= nums[i] * suffix[i+1];
    }

    for(int i=0; i< n ; i++){

        if(i==0)
        ans[i]= 1 * suffix[i+1];
        else if (i == n-1)
        ans[i]=  prefix[i-1] * 1;
        else
        ans[i]= prefix[i-1] * suffix[i +1];
    }

    for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
}
    return 0;
}
