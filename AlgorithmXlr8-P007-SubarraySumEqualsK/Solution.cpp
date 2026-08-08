#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the total number of contiguous subarrays whose sum equals 
    map <long long, long long> mp;
    mp[0]=1;
    long long  sum=0;
    int count=0;
    for(int i=0;  i< n;  i++){
        sum+= nums[i];
        long long checkInMap= sum - k;

        if (mp.find(checkInMap) != mp.end()) {
        count += mp[checkInMap];
    }
        
        mp[sum]++;
        


    }

    cout << count << "";

    return 0;
}
