#include <bits/stdc++.h>
using namespace std;


int sumSubarrayMins(vector<int>& arr) {
        int n= arr.size();
        vector <int> leftMin(n,-1);
        vector <int> rightMin(n,-1);
        stack <int> st;


        for( int i=0; i< n ; i++){

            if(st.empty()){
                st.push(i);
            }else if( arr[st.top()]  <= arr[i]){

                st.push(i);
            }else{

                while(!st.empty() && arr[st.top()] > arr[i]){

                    auto it= st.top();
                    rightMin[it]= i;
                    st.pop();
                }

                st.push(i);

            }


        }

        while(!st.empty()){

                  auto it= st.top();
                    rightMin[it]= n;
                    st.pop();

        }

         for( int i=n-1; i >= 0 ; i--){


            if(st.empty()){
                st.push(i);
            }else if( arr[st.top()]  < arr[i]){

                st.push(i);
            }else{

                while(!st.empty() && arr[st.top()] >= arr[i]){

                    auto it= st.top();
                    leftMin[it]= i;
                    st.pop();
                }

                st.push(i);

            }



        }

        while(!st.empty()){

             auto it= st.top();
                    leftMin[it]= -1;
                    st.pop();

            
        }

         long long ans = 0;
const long long MOD = 1e9 + 7;

for (int i = 0; i < n; i++) {
    ans = (ans + 1LL * (i - leftMin[i]) *
                  (rightMin[i] - i) *
                  arr[i]) % MOD;
}

return ans;
        
    }

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Write your solution here.
    // Find the sum of min(subarray) over every contiguous subarray of
    // arr, modulo 1e9+7. Use the monotonic stack contribution
    // technique: for each element, count how many subarrays it is the
    // minimum of (via previous-strictly-smaller and next-smaller-or-
    // equal boundaries). Print the total.
    int ans =sumSubarrayMins(arr);
    cout << ans <<"";

    return 0;
}

