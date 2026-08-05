#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    
    int total=0;
    for(int i=0; i< n; i++){

            // for everyt index count left odd and even + 
            // right odd and even

            int left= i+1;
            int right=n-i;

            int leftOdd= (left)/2;
            int leftEven= (left+1)/2;

            int rightOdd= (right)/2;
            int rightEven=(right+1)/2;

// left + 1 right  if we remove 1
            total += nums[i] * (leftEven * rightEven 
       + leftOdd * rightOdd);
    }


    cout << total << " ";
    return 0;
}
