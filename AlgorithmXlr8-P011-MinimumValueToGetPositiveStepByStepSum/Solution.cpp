#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Track the running prefix sum of nums and find the minimum value it ever reaches.
    // Print the minimum positive startValue such that startValue + prefixSum >= 1 always.


    vector<int>prefix(n);
        prefix[0]= nums[0];
        
            int ans=1;
        for(int i=1; i < n ; i++){
            prefix[i]= nums[i] + prefix[i-1];
        }

         int minV= INT_MAX;
        for(int i=0; i < n ; i++){

            
                 minV= min(minV, prefix[i]);

        

        }
           if( minV <=0){
             ans = abs(minV)+1;
       
             }


           

       

          

        
    cout << ans <<"";

    return 0;
}
