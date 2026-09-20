#include <bits/stdc++.h>
using namespace std;


long long subArrayRanges(vector<int>& nums) {
        
        int n = nums.size();
        vector<pair<int,int>> smallerArray(n, {INT_MAX,INT_MAX});
        vector<pair<int,int>> largerArray(n, {INT_MAX,INT_MAX});
        stack<pair<int, int>> st;

        for (int i = 0; i < n; i++) {

            if (st.empty()) {
                st.push({i, nums[i]});
            } else if (st.top().second < nums[i]) {

                st.push({i, nums[i]});
            } else {
                while (!st.empty() && st.top().second >= nums[i]) {
                    auto it = st.top();
                    st.pop();
                    smallerArray[it.first].second = i - it.first ;
                }

                st.push({i, nums[i]});
            }
        }

        while (!st.empty()) {

            auto it = st.top();
            st.pop();
            smallerArray[it.first].second = n - it.first;
        }
        
        
       

        for (int i = n - 1; i >= 0; i--) {

            if (st.empty()) {
                st.push({i, nums[i]});
            } else if (st.top().second < nums[i]) {

                st.push({i, nums[i]});
            } else {
                while (!st.empty() && st.top().second > nums[i]) {
                    auto it = st.top();
                    st.pop();
                    smallerArray[it.first].first = it.first - i;
                }

                st.push({i, nums[i]});
            }
        }
        
          
        

        while (!st.empty()) {

            auto it = st.top();
            st.pop();
            smallerArray[it.first].first =  it.first +1;
        }
       
      

        for (int i = 0; i < n; i++) {

            if (st.empty()) {
                st.push({i, nums[i]});
            } else if (st.top().second > nums[i]) {

                st.push({i, nums[i]});
            } else {
                while (!st.empty() && st.top().second <= nums[i]) {
                    auto it = st.top();
                    st.pop();
                    largerArray[it.first].second = i - it.first;
                }

                st.push({i, nums[i]});
            }
        }

         while (!st.empty()) {

            auto it = st.top();
            st.pop();
            largerArray[it.first].second = n - it.first;;
        }

        for (int i = n - 1; i >= 0; i--) {

            if (st.empty()) {
                st.push({i, nums[i]});
            } else if (st.top().second > nums[i]) {

                st.push({i, nums[i]});
            } else {
                while (!st.empty() && st.top().second < nums[i]) {
                    auto it = st.top();
                    st.pop();
                    auto temp = it.first - i;
                    largerArray[it.first].first =  temp;
                }

                st.push({i, nums[i]});
            }
        }


         while (!st.empty()) {

            auto it = st.top();
            st.pop();
            largerArray[it.first].first = it.first +1;
        }
        
          
        long long ans=0;
        for( int i=0; i< n; i++){


           ans += 1LL * largerArray[i].first
          * largerArray[i].second
          * nums[i]
       - 1LL * smallerArray[i].first
          * smallerArray[i].second
          * nums[i];


        }

        return ans;
    }

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    long long ans= subArrayRanges(nums);
    cout << ans <<"";

   

    return 0;
}
