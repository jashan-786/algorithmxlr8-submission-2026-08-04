#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Determine if there exist indices i < j < k with
    // nums[i] < nums[k] < nums[j] (a "132 pattern"). Scanning right to
    // left with a monotonic stack of "3" candidates and a running best
    // "2" candidate solves this in O(n). Print "true" or "false".
    stack <int> st;
               auto middle= INT_MIN;

               auto ans= false;

        for( int i = nums.size() -1 ; i>=0 ; i--){
         

                if(st.empty()){
                    st.push(nums[i]);
                }
                else{

                    if( nums[i] < middle ){
                        ans= true;
                        break;
                    }
                    else{   

                        while(!st.empty()  &&  nums[i] > st.top() ){

                                auto curr= st.top();
                                middle= max(middle, curr);
                                st.pop();

                        }
                        st.push(nums[i]);

                    }

                }

        }
        cout << boolalpha << ans;



    return 0;
}
