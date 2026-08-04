<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Number of Ways to Split Array

**Difficulty:** `Easy`

## Problem

Given an integer array nums of length at least 2, count the number of ways to split it into two non-empty parts, a left part (indices 0 through i) and a right part (indices i+1 through the end), such that the sum of the left part is greater than or equal to the sum of the right part.

Read n on the first line of standard input, then n space-separated integers on the second line. Print the count of valid splits to standard output.

## Examples

### Example 1

**Input**
```
4
10 4 -8 7
```
**Output**
```
2
```

**Explanation:** Splitting after index 0 (10 vs 4-8+7=3) and after index 1 (14 vs -1) both satisfy left >= right.

### Example 2

**Input**
```
4
2 3 1 0
```
**Output**
```
2
```

**Explanation:** Two of the three possible split points satisfy left >= right.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/number-of-ways-to-split-array).