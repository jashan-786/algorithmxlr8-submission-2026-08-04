<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Maximum Size Subarray Sum Equals k

**Difficulty:** `Medium`

## Problem

Given an integer array nums and an integer k, find the maximum length of a subarray that sums to exactly k.

If no such subarray exists, return 0.

The standard approach uses prefix sums combined with a hash map. As you scan the array left to right, keep a running sum of all elements seen so far. For each position, check whether (running sum - k) has been seen before as an earlier prefix sum - if it has, the subarray between that earlier position and the current one sums to exactly k.

To maximize the length, the hash map should only remember the earliest index at which each prefix sum first appeared, and it should be seeded with the pair (sum = 0, index = -1) to correctly handle subarrays that start at index 0.

Read n and k from standard input, followed by n space-separated integers (nums), and print a single integer: the answer.

## Examples

### Example 1

**Input**
```
5 3
1 -1 5 -2 3
```
**Output**
```
4
```

**Explanation:** The subarray [1, -1, 5, -2] sums to 3 and has length 4. No longer subarray sums to 3.

### Example 2

**Input**
```
4 1
-2 -1 2 1
```
**Output**
```
2
```

**Explanation:** The subarray [-1, 2] sums to 1 and has length 2.

### Example 3

**Input**
```
3 3
1 2 3
```
**Output**
```
2
```

**Explanation:** Both [1, 2] and [3] sum to 3, but [1, 2] is the longer one, so the answer is 2.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/maximum-size-subarray-sum-equals-k).