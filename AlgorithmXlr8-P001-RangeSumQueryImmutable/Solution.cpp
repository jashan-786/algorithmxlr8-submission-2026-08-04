#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int q;
    cin >> q;
    vector<pair<int,int>> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i].first >> queries[i].second;

    // Write your solution here.
    // Precompute a prefix sum array once, then for each query [left, right],
    // print sum(nums[left..right]) (inclusive) on its own line.

        vector<long long> prefix(n);

    int sum=0;
    prefix[0]= nums[0];
    for( int i=1; i< n; i++){
         prefix [i]= nums[i]+ prefix[i-1];
    }
    

    for(auto [i,j]: queries){

    if (i == 0)
        cout << prefix[j] << "\n";
    else
        cout << prefix[j] - prefix[i - 1] << "\n";
    }


    return 0;
}
