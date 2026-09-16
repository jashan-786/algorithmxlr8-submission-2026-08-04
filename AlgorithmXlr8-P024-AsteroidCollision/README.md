<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Asteroid Collision

**Difficulty:** `Medium`

## Problem

We are given an array asteroids of integers, where the absolute value represents an asteroid's size and the sign represents its direction (positive = right, negative = left). Two asteroids moving the same direction never meet. When two meet, the smaller explodes (if equal size, both explode). Find the state of the asteroids after all collisions.

Read n and the n asteroid values from standard input. Print the surviving asteroids, space-separated, or "(empty)" if none survive.

## Examples

### Example 1

**Input**
```
3
5 10 -5
```
**Output**
```
5 10
```

**Explanation:** -5 collides with 10 (bigger): 10 survives, -5 explodes. Result: [5,10].

### Example 2

**Input**
```
3
10 2 -5
```
**Output**
```
10
```

**Explanation:** -5 first destroys 2 (smaller), then collides with 10 (bigger) and explodes itself. Result: [10].

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/asteroid-collision).