<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Simplify Path

**Difficulty:** `Medium`

## Problem

Given an absolute Unix-style file path, convert it to its simplified canonical form. Multiple slashes count as one; '.' means the current directory (ignored); '..' means the parent directory (go up one level, never above the root). The result must start with '/' and have no trailing slash (except the root itself).

Read path from standard input. Print the simplified canonical path.

## Examples

### Example 1

**Input**
```
/home/
```
**Output**
```
/home
```

**Explanation:** The trailing slash is removed.

### Example 2

**Input**
```
/home/user/Documents/../Pictures
```
**Output**
```
/home/user/Pictures
```

**Explanation:** '..' removes 'Documents', leaving /home/user/Pictures.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/simplify-path).