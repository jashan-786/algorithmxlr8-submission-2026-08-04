<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Find Pivot Index

**Difficulty:** `Easy`

## Problem

Given an array of integers nums, return the leftmost pivot index: the index where the sum of every element to its left equals the sum of every element to its right (both sums treated as 0 if there is nothing on that side). If no such index exists, return -1.

Read n on the first line of standard input, then n space-separated integers on the second line. Print the pivot index (or -1) to standard output.

## Examples

### Example 1

**Input**
```
6
1 7 3 6 5 6
```
**Output**
```
3
```

**Explanation:** At index 3, the left sum (1+7+3=11) equals the right sum (5+6=11).

### Example 2

**Input**
```
3
1 2 3
```
**Output**
```
-1
```

**Explanation:** No index has matching left and right sums.

### Example 3

**Input**
```
3
2 1 -1
```
**Output**
```
0
```

**Explanation:** At index 0, the left sum (nothing, so 0) equals the right sum (1 + -1 = 0).

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/find-pivot-index).