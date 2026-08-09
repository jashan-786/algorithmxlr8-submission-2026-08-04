<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Minimum Value to Get Positive Step by Step Sum

**Difficulty:** `Medium`

## Problem

You are given an array of integers nums, and you start with an initial positive value startValue.

In each iteration, you calculate the step by step sum of startValue plus the elements of nums, taken one at a time from left to right.

Find the minimum positive value of startValue such that the step by step sum is never less than 1 at any point during the traversal.

Input format:
- Line 1: n, the length of nums.
- Line 2: n space-separated integers, the elements of nums.

Print a single integer, the minimum valid startValue.

## Examples

### Example 1

**Input**
```
5
-3 2 -3 4 2
```
**Output**
```
5
```

**Explanation:** If startValue = 4, the step by step sum after the third element drops below 1. startValue = 5 is the smallest value for which the step by step sum never drops below 1.

### Example 2

**Input**
```
2
1 2
```
**Output**
```
1
```

**Explanation:** The step by step sums are 1 + 1 = 2 and 2 + 2 = 4, both already at least 1, so the minimum positive startValue is 1.

### Example 3

**Input**
```
3
1 -2 -3
```
**Output**
```
5
```

**Explanation:** If startValue = 4, the step by step sum after the last element drops below 1. startValue = 5 keeps every step by step sum at or above 1.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/minimum-value-to-get-positive-step-by-step-sum).