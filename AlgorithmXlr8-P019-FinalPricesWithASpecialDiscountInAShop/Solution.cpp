#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];

    // Write your solution here.
    // For each item, if a LATER item has a price <= it, subtract that
    // first qualifying later price as a discount. A monotonic
    // non-decreasing stack of indices resolves all discounts in one
    // pass. Print the final prices space-separated.

       
        vector <int> answer(n);


        for(int i=0; i< n ;i++){

                int curDiscount=0;
             for( int j= i+1; j<n ; j++ ){
                if(prices[j] <= prices[i]){
                        curDiscount= prices[j];
                    break;
                }

             }


            answer[i]= prices[i] - curDiscount;
        } 

        for(int i=0; i < n ; i++){
            cout << answer[i] << " ";
        }

    return 0;
}
