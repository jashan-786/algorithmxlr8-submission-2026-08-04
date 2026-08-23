#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the maximum min-product, modulo 1000000007.

    // soluiton think in reverse of question evey subarry an find min
    // consider every leemnt as min and find subarrya it can like specii for multiplication adn additn problem tough to reverse
    
    // 1) consider the prefix sum 
    vector<int> prefix(n+1);
    prefix[0]=0;


     vector<int> rightSmaller(n, n);
vector<int> leftSmaller(n, -1);

    stack < int> st;


    for(int i=1; i<=n ; i++){
        prefix[i]= prefix[i-1] + nums[i-1];
    }

    // stack in inceraing order from left to right
    for(int i=0; i < n ; i++){

        while(!st.empty() && nums[st.top()] > nums[i])
        {       
            rightSmaller[st.top()] = i;
            st.pop();
        }

        st.push(i);

    }

      while(!st.empty())
        {       
    
            st.pop();
        }

    // stack in decreasing order from right to left


    for(int i=n-1; i >= 0 ; i--){

        while(!st.empty() && nums[st.top()] > nums[i])
        {       
            leftSmaller[st.top()] = i;
            st.pop();
        }

        st.push(i);

    }
    long long maxA = 0;
    for(int i=0; i< n ; i++){
        int left= leftSmaller[i] +1 ;
        int right= rightSmaller[i] - 1;
         long long sum = prefix[right + 1] - prefix[left];

long long product = 1LL * nums[i] * sum;

maxA = max(maxA, product);
    }

        cout << maxA << "";

    return 0;
}
