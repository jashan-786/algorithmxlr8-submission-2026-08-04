<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Final Prices With a Special Discount in a Shop

**Difficulty:** `Easy`

## Problem

You are given an integer array prices where prices[i] is the price of the i-th item. For each item i, if there exists a later item j (j > i) with prices[j] <= prices[i], the first such item's price is subtracted from prices[i] as a discount. Return the array of final prices after applying every item's discount.

Read n and the n prices from standard input. Print the final prices, space-separated.

## Examples

### Example 1

**Input**
```
5
8 4 6 2 3
```
**Output**
```
4 2 4 2 3
```

**Explanation:** 8's discount is 4 (the next item); 4's discount is 2 (6 is too expensive); 6's discount is 2; 2 and 3 have no qualifying later item.

### Example 2

**Input**
```
4
10 1 1 6
```
**Output**
```
9 0 1 6
```

**Explanation:** 10's discount is 1; the first 1's discount is the second 1 (equal prices qualify); the second 1 and 6 have no discount.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/final-prices-with-a-special-discount-in-a-shop).