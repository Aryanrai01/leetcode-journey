# Two Sum

## Problem

{
    Difficulty: Easy

    Pattern: 2 pointer and hash_map

    Time Complexity: {(2-Pointer != sorted )== O(nlogn)} && {sorted==O(logn)} && hash_map==O(n) 

    Space Complexity: {2-pointer==O(n)} && {hashmap==O(n)}

    Observation:
    This we can tackle in two ways first using 2-pointer and second using hash_table.main cruck is finding if number is n finding (target-n) using hashtable or 2 pointer.

    Approach:
    Brute force || 2-Pointer || Hash table.

    Mistakes:
    when i had sorted initially index values are getting changed but after that i had used 2D array So, i pushed value as well as index and sorted according to value then easily got index that was our main AIM.

    Learning:
    2-Pointer when to decrease and when to increase and Hash map use.
}

---

## Reflection

### How did I recognize this pattern?
I have to find only 1 value (target-n). n we can get in n time and in logn we can search (target-n) using binary search or any method which gives searching in logn .

---

### Why does this algorithm work?

Because it easy to use and giving O(logn) and O(n) is very good I think .

---

### What mistake did I make the first time?
Not able to get index value.
---

### When should I use this technique again?
Many places where we have to find 1 value other we can get easily.