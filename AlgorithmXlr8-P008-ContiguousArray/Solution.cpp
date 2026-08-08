#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the maximum length of a contiguous subarray with an equal
    // number of 0s and 1s.
    int maxC= INT_MIN;

    for( int i=0; i < n; i++){
        int zc=0;
        int oc=0;

        for( int j= i; j < n; j++){
                if( nums[j] == 0)
                zc++;
                else
                oc++;

                if( zc == oc){
                    maxC= max(maxC, j-i +1);
                }
        }

    }

    cout << maxC << "";

    return 0;
}
