<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Max Sum of Rectangle No Larger Than K

**Difficulty:** `Hard`

## Problem

Given a rows x cols integer matrix and an integer k, find the maximum sum of any rectangular submatrix such that the sum is no larger than k. It is guaranteed that at least one rectangle has a sum no larger than k.

Read rows, cols, and k on the first line of standard input, then rows lines each with cols space-separated integers. Print the maximum qualifying rectangle sum.

## Examples

### Example 1

**Input**
```
matrix = [[1,0,1],[0,-2,3]], k = 2
```
**Output**
```
2
```

**Explanation:** A single cell of value 1 is the best rectangle whose sum does not exceed 2.

### Example 2

**Input**
```
matrix = [[2,2,-1]], k = 3
```
**Output**
```
3
```

**Explanation:** The two-cell rectangle [2,2] sums to 4, over the cap, so a single cell of value 2 is the best valid choice.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/max-sum-of-rectangle-no-larger-than-k).