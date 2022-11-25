# 1.1 Is Unique?

## Simple string checking algorithm.

## There are multiple ways of going about it:

### Brute force: for each character of string check the entire string. O(n²) time O(1) space.

### Sorting: Sort the string and a linear check to see duplicates. O(nlogn) time O(1) space.

### Using hash Table/Map: Put the frequency of each character inside then check. O(n) time O(n) space.