<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Count of Range Sum

**Difficulty:** `Hard`

## Problem

Given an integer array nums and two integers lower and upper, return the number of range sums that lie within [lower, upper], inclusive. A range sum S(i, j) is the sum of nums[i] through nums[j], for i <= j.

Read n, lower, and upper on the first line of standard input, then n space-separated integers on the second line. Print the count.

## Examples

### Example 1

**Input**
```
nums = [-2,5,-1], lower = -2, upper = 2
```
**Output**
```
3
```

**Explanation:** S(0,0)=-2, S(2,2)=-1, and S(0,2)=2 all fall within [-2, 2].

### Example 2

**Input**
```
nums = [0], lower = 0, upper = 0
```
**Output**
```
1
```

**Explanation:** The only range sum, S(0,0)=0, qualifies.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/count-of-range-sum).