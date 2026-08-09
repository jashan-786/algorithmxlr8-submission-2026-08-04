#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the maximum length of a subarray that sums to k.

    map<int, int> mp;
    mp[0]= -1;

    int length=0;
    int sum=0;
    for(int i=0; i < n ; i++ ){
        sum+= nums[i];

        int checkIfPresent= sum - k;

        if( mp.find(checkIfPresent) != mp.end() ){

                length= max(length, i- mp[checkIfPresent]);

        }


        if( mp.find(sum) == mp.end() ){
        mp[sum]=i;
        }
        


    }

    cout << length << "";

    return 0;
}
