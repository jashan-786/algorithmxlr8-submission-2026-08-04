#include <bits/stdc++.h>
using namespace std;

 int totalStrength(vector<int>& strength) {

        long long MOD = 1000000007LL;
        int n= strength.size();

        vector<long long> rightB(n,-1);
        vector<long long> leftB(n,-1);

        stack<int> st;

        vector<long long > prefixA(n+1,0);
        vector<long long> prefixO(prefixA.size()+1,0);

        for(int i=0; i< n; i++){
            prefixA[i+1]= strength[i]+ prefixA[i];
        }


         for(int i=0; i<= n; i++){
            prefixO[i+1]= prefixA[i]+ prefixO[i];
        }

        for (int i = 0; i < n; i++) {
    while (!st.empty() && strength[st.top()] >= strength[i]) {
        rightB[st.top()] = i;
        st.pop();
    }
    st.push(i);
}


        while(!st.empty()){

            auto it=st.top();
            st.pop();
            rightB[it]=n;

        }



      

        for (int i = n - 1; i >= 0; i--) {
    while (!st.empty() && strength[st.top()] > strength[i]) {
        leftB[st.top()] = i;
        st.pop();
    }
    st.push(i);
}



        while(!st.empty()){

            auto it=st.top();
            st.pop();
            leftB[it]=-1;

        }


        long long ans=0;


        for(int i=0; i< n ;i++){

               long long leftCount = i - leftB[i];
    long long rightCount = rightB[i] - i;

    long long sumRight =
        (prefixO[rightB[i] + 1] - prefixO[i + 1] + MOD) % MOD;

    long long sumLeft =
        (prefixO[i + 1] - prefixO[leftB[i] + 1] + MOD) % MOD;

    long long total = (leftCount * sumRight % MOD
                     - rightCount * sumLeft % MOD + MOD) % MOD;

    ans = (ans + strength[i] * total % MOD) % MOD;


        }

        return (int) ans;


    }

int main() {
    int n;
    cin >> n;
    vector<int> strength(n);
    for (int i = 0; i < n; i++) cin >> strength[i];

    // Write your solution here.
    // For every contiguous subarray, its total strength is (weakest
    // wizard's strength) * (sum of the subarray). Return the sum of
    // this over all subarrays, mod 1e9+7. Use the monotonic stack
    // contribution technique (as in Sum of Subarray Minimums) to find
    // each element's min-boundaries, plus a SECOND prefix-sum layer
    // (prefix sums of prefix sums) to total each affected subarray's
    // sum in O(1). Print the result.
    int res= totalStrength(strength);
    cout << res <<"";

    return 0;
}

