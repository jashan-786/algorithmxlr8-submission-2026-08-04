#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the leftmost index where the sum of elements to its left equals
    // the sum of elements to its right, or -1 if none exists.

    
    vector <long long> suffix(n);
    vector <long long> prefix(n);


    suffix[n-1]= nums[n-1];
    for(int i= n-2; i>=0 ; i--){
        suffix[i]= nums[i] + suffix[i+1];
       
    }

    prefix[0]= nums[0];

    for(int i= 1; i<n ; i++){
        prefix[i]= nums[i] + prefix[i-1]; 
    }

    int ans=-1;
    for(int i= 0; i<n; i++){

        if(i==0 && 0 == suffix[i+1] || i==n-1 && prefix[i-1] == 0){
            ans=i;
            break;
        }
    
          else if(i-1 !=0 and i+1 != n and prefix[i-1] == suffix[i+1]){
            ans=i;

          }
    }

    cout << ans << "";
    return 0;
}