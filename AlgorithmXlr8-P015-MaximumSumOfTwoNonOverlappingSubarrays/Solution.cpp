#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, L, M;
    cin >> n >> L >> M;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    // Write your solution here.
    // Print the maximum combined sum of two non-overlapping subarrays of
    // length L and M (in either order).

    pair<int, int> p1;
    int sum=0;
    int maxSum1= INT_MIN;

    pair<int, int>p2;
    int maxSum2= INT_MIN;

    int greatSum1=0;

    int l=0;
    int r=0;

    while(l <= r && r < n ){

        
        while( r- l <= L-1)
        {
            
            sum+= nums[r++];

        }

        if(maxSum1 <= sum){
        maxSum1= sum;
        p1.first= l;
        p1.second= r-1;

        }

        sum-= nums[l];
        l++; 
    }



     l=0;
     r=0;
    sum=0;
    while(l <= r && r < n ){

        
        while( r- l <= M-1)
        {   

              p2.first= l;
                p2.second= r;
            sum+= nums[r++];

        }

        if(maxSum2 <= sum &&  !(p2.first >= p1.first && p2.first <= p1.second) &&  !(p2.second >= p1.first && p2.second <= p1.second)  ){
        maxSum2= sum;
        p2.first= l;
        p2.second= r-1;
        }

        sum-= nums[l];
        l++; 
    }


    greatSum1= maxSum1 + maxSum2;



     p1= {0,0};
    sum=0;
    maxSum1= INT_MIN;

    p2 = {0,0};
    maxSum2= INT_MIN;



    l=0;
    r=0;

    while(l <= r && r < n ){

        
        while( r- l <= M-1)
        {
            
            sum+= nums[r++];

        }

        if(maxSum1 <= sum){
        maxSum1= sum;
        p1.first= l;
        p1.second= r-1;

        }

        sum-= nums[l];
        l++; 
    }



     l=0;
     r=0;
    sum=0;
    while(l <= r && r < n ){

        
        while( r- l <= L-1)
        {   

              p2.first= l;
                p2.second= r;
            sum+= nums[r++];

        }

        if(maxSum2 <= sum &&  !(p2.first >= p1.first && p2.first <= p1.second) &&  !(p2.second >= p1.first && p2.second <= p1.second)  ){
        maxSum2= sum;
        p2.first= l;
        p2.second= r-1;
        }

        sum-= nums[l];
        l++; 
    }


    int greatSum2= maxSum1 + maxSum2;

    cout << max(greatSum1, greatSum2) << "";
    return 0;
}
