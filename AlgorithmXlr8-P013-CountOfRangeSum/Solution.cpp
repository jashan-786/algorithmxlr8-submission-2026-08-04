#include <bits/stdc++.h>
using namespace std;

long long lower, upper;


// Merge two sorted halves:
//
// LEFT  = [l ... mid]
// RIGHT = [mid+1 ... r]
//
// Also count valid pairs where:
// y is in LEFT
// x is in RIGHT
//
// We need:
// lower <= x - y <= upper
//
// Therefore:
// x - upper <= y <= x - lower

long long merge(vector<long long>& arr, int l, int r) {

    int mid = l + (r - l) / 2;

    // low  = first position where arr[low] >= x - upper
    // high = first position where arr[high] >  x - lower

    int low = l;
    int high = l;

    long long count = 0;

    for (int i = mid + 1; i <= r; i++) {

        long long x = arr[i];

        while (low <= mid && arr[low] < x - upper) {
            low++;
        }

        while (high <= mid && arr[high] <= x - lower) {
            high++;
        }

        // [low, high) are valid
        count += high - low;
    }


    // Now actually merge the two sorted halves

    vector<long long> temp;

    int left = l;
    int right = mid + 1;

    while (left <= mid && right <= r) {

        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Remaining LEFT elements
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Remaining RIGHT elements
    while (right <= r) {
        temp.push_back(arr[right]);
        right++;
    }


    // Copy merged result back into arr[l ... r]

    for (int i = 0; i < temp.size(); i++) {
        arr[l + i] = temp[i];
    }

    return count;
}


long long subCount(vector<long long>& arr, int l, int r) {

    // One element = no pair
    if (l >= r) {
        return 0;
    }

    int mid = l + (r - l) / 2;


    // Trust recursion:
    // all valid pairs completely inside LEFT
    long long countL = subCount(arr, l, mid);


    // Trust recursion:
    // all valid pairs completely inside RIGHT
    long long countR = subCount(arr, mid + 1, r);


    // Count pairs:
    //
    // LEFT -> RIGHT
    //
    // These haven't been counted yet.
    long long countM = merge(arr, l, r);


    return countL + countR + countM;
}


int main() {

    int n;
    cin >> n >> lower >> upper;

    vector<long long> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    // Prefix array has n + 1 elements.
    //
    // prefix[0] = 0
    // prefix[1] = nums[0]
    // prefix[2] = nums[0] + nums[1]
    // ...

    vector<long long> prefix(n + 1);

    prefix[0] = 0;

    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + nums[i];
    }


    // prefix has indices:
    //
    // 0 ... n

    long long ans = subCount(prefix, 0, n);

    cout << ans << '\n';

    return 0;
}