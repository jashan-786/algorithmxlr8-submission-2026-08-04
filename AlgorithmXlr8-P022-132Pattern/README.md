<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# 132 Pattern

**Difficulty:** `Medium`

## Problem

Given an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j], nums[k] such that i < j < k and nums[i] < nums[k] < nums[j]. Return true if there is a 132 pattern in nums, otherwise return false.

Read n and the n values from standard input. Print "true" or "false".

## Examples

### Example 1

**Input**
```
4
3 1 4 2
```
**Output**
```
true
```

**Explanation:** nums[1]=1, nums[2]=4, nums[3]=2 satisfies 1 < 2 < 4.

### Example 2

**Input**
```
4
1 2 3 4
```
**Output**
```
false
```

**Explanation:** Strictly increasing: no position can be a 'peak' with something smaller after it.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/132-pattern).