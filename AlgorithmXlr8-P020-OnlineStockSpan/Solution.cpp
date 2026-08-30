#include <bits/stdc++.h>
using namespace std;


 stack<pair<int,int>> st1;

  int next(int price) {
        int counter=1;

        while(!st1.empty() && st1.top().first <= price ){
         pair p= st1.top();
            st1.pop();
            counter+= p.second;
        }

        
        st1.push({price,counter});

        return counter;
    }

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];

    // Write your solution here.
    // For each price (in order), compute its span: the number of
    // consecutive days ending today (going backward) whose price is
    // <= today's price. A monotonic decreasing stack of (price, span)
    // pairs computes this in amortized O(1) per day, absorbing whole
    // prior spans at once. Print one span per line.

    
    for(int i=0; i< n ; i++){

        int ans= next(prices[i]);
        cout <<  ans << "\n";
    }

    return 0;
}
