<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Online Stock Span

**Difficulty:** `Medium`

## Problem

Design an algorithm that collects daily price quotes for a stock and returns the span of the stock's price for the current day: the maximum number of consecutive days (starting today and going backward) for which the price was less than or equal to today's price.

Read n and the n prices (in the order they arrive) from standard input. Print one span per line, one for each price processed in order.

## Examples

### Example 1

**Input**
```
7
100 80 60 70 60 75 85
```
**Output**
```
1
1
1
2
1
4
6
```

**Explanation:** Spans: 1,1,1,2,1,4,6 (each absorbing whole prior runs it dominates).

### Example 2

**Input**
```
5
31 41 48 59 79
```
**Output**
```
1
2
3
4
5
```

**Explanation:** Strictly increasing prices: each absorbs everything before it, giving spans 1,2,3,4,5.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/online-stock-span).