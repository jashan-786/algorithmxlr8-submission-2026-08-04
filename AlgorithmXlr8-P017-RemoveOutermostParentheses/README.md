<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Remove Outermost Parentheses

**Difficulty:** `Easy`

## Problem

A valid parentheses string is primitive if it is non-empty and cannot be split into two smaller non-empty valid parentheses strings. Given a valid parentheses string s, decomposable into a sequence of primitive pieces, remove the outermost pair of parentheses from every primitive piece.

Read s from standard input. Print the result, or "(empty)" if it fully cancels out.

## Examples

### Example 1

**Input**
```
(()())(())
```
**Output**
```
()()()
```

**Explanation:** Pieces "(()())" and "(())" strip to "()()" and "()", giving "()()()".

### Example 2

**Input**
```
()()
```
**Output**
```
(empty)
```

**Explanation:** Each piece is just "()", so stripping its outermost (and only) pair leaves nothing.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/remove-outermost-parentheses).