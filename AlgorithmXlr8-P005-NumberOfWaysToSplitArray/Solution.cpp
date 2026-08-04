#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the number of ways to split nums into a non-empty left part and
    // a non-empty right part such that sum(left) >= sum(right).

    vector <long long> prefix(n);
    vector <long long> suffix(n);

    prefix[0]= nums[0];
    suffix[n-1]= nums[n-1];

    for(int i=1 ; i<n ; i++){
        prefix[i]= nums[i]+ prefix[i-1];
    }

    for(int i=n-2 ; i>= 0 ; i--){
        suffix[i]= nums[i]+ suffix[i+1];
    }

    int count=0;
    for(int i=0; i<n ; i++){
        if(i < n-1 and prefix[i] >= suffix[i+1])
       { // {
        //     cout << prefix[i] << " ";
            count++; }

    }

    cout << count << "";
    
    return 0;
}
