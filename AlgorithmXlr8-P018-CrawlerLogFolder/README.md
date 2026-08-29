<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Crawler Log Folder

**Difficulty:** `Easy`

## Problem

A file system log is given as an array of strings logs, each one of: "../" (move to the parent folder, if not already at the main folder), "./" (stay in the same folder), or "x/" (move to a child folder named x). Return the minimum number of "../" operations needed to go back to the main folder after processing all logs.

Read n and the n log entries (each on its own line) from standard input. Print the minimum number of "../" moves needed.

## Examples

### Example 1

**Input**
```
5
d1/
d2/
../
d21/
./
```
**Output**
```
2
```

**Explanation:** Depth goes 1, 2, 1, 2, 2, ending at depth 2.

### Example 2

**Input**
```
4
d1/
../
../
../
```
**Output**
```
0
```

**Explanation:** Depth goes 1, 0, 0 (floored), 0 (floored), ending at depth 0.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/crawler-log-folder).