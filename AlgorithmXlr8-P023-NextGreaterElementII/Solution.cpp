#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // nums is CIRCULAR. For each element, find the next strictly
    // greater element, searching circularly (wrapping past the end if
    // needed), or -1 if none exists anywhere in the circle. Conceptually
    // process the array twice (index i % n) with a monotonic decreasing
    // stack, only pushing new indices during the first pass. Print the
    // results space-separated.
        stack <pair<int,int>> st;
        


        vector<int> ans(nums.size(), INT_MAX);


        for (int i=0; i< 2 * nums.size() ; i++ ){

            int curr= i % nums.size();

        while((!st.empty()) && nums[curr] > st.top().second){

            auto temp=st.top();
            ans[temp.first] = nums[curr];
            st.pop();

        }
        if(i < nums.size()){
        st.push({curr,nums[curr]});
        }
      

        }

                while( !st.empty()){
                        auto temp=st.top();

                            if (ans[temp.first] == INT_MAX) {
        ans[temp.first] = -1;
    }

                       

                         st.pop();

                }

            for( int i=0; i< n ; i++){

                cout << ans[i] << " ";
            }



        // stack <pair<int,int>> st;
        


        // vector<int> ans(nums.size());


        // for (int i=0; i< nums.size() ; i++ ){

        // while((!st.empty()) && nums[i] > st.top().second){

        //     auto temp=st.top();
        //     ans[temp.first] = nums[i];
        //     st.pop();

        // }
        // st.push({i,nums[i]});

        // }

        // while(!st.empty()){
        //      auto temp=st.top();
        //          st.pop();

        //          bool check=false;

        //          for(int i=0; i<temp.first; i++){
        //             if( nums[i] > temp.second){
        //                 ans[temp.first]= nums[i];
        //                 check=true;
        //                 break;
        //             }
        //          }
        //          if(!check)
        //           ans[temp.first]= -1;

        // }

        

        // return ans;
        


    return 0;
}
