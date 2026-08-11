#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];



    int currSum=0;
    map<int, int>mp;

    mp[0]=1;
    int output=0;
    int oddCounter=0;
    for(int i=0; i< n; i++){


            if( nums[i] %2 != 0){
            currSum++;
            }

            int prefixToBeCheckedBefore= currSum - k;

            if(mp.find(prefixToBeCheckedBefore) != mp.end()){

                output+= mp[prefixToBeCheckedBefore];

            }

            mp[currSum]++;

    }

    cout << output << "";
    return 0;

    // Write your solution here.
    // Print the number of subarrays containing exactly k odd numbers.
    // int ans=0;

    // for(int i=0; i < n ; i++){



    //     int pointer=i;
    //     int odd=0;
    //     int tempsum=0;
    //     int counter =0;
    //     while ( pointer < n ){
    //         if(nums[pointer] %2 != 0){
    //             odd++;
    //         }

    //         pointer++;
    //          if(odd == k){
    //             ans++;
    //     }
    //     }

       
    // }

    // cout << ans <<"";


}
