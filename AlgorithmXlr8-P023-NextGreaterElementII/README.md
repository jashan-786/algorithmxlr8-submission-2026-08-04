<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Next Greater Element II

**Difficulty:** `Medium`

## Problem

Given a circular integer array nums (the last element's next is the first element), return the next greater number for every element, searching circularly if needed. If no such number exists anywhere in the circle, use -1.

Read n and the n values from standard input. Print the results, space-separated.

## Examples

### Example 1

**Input**
```
3
1 2 1
```
**Output**
```
2 -1 2
```

**Explanation:** Index 0 (1) -> 2; index 1 (2) -> -1 (nothing bigger anywhere); index 2 (1) -> 2, found by wrapping around to index 0.

### Example 2

**Input**
```
5
1 2 3 4 3
```
**Output**
```
2 3 4 -1 4
```

**Explanation:** Index 3 (4) -> -1 (the overall max); index 4 (3) -> 4, found by wrapping around past index 2.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/next-greater-element-ii).