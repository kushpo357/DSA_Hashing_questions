# Title: Count subarrays with sum K

## Description
Given an array containing both positive and negative integers, compute the number of subarrays that sum up to a given value K.

## Input
- The first line consists of a number `t` representing the number of test cases.
- For each test case:
  - The first line contains two integers `N` (size of the array) and `K` (desired sum).
  - The second line contains `N` integers representing the elements of the array.

## Output
For each test case, output the number of subarrays that have a sum equal to `K`.

## Example
### Input
2\
8 10\
15 -2 12 -18 1 7 8 23\
5 6\
3 4 2 -2 3

### Output
2\
3


## Explanation
- **Example 1:**
  - Input array: `[15, -2, 12, -18, 1, 7, 8, 23]`
  - Subarrays with sum 10: `[15, -2, 12, -18, 1]` and `[12, -18, 1, 7, 8]`
  - Number of such subarrays: `2`
  
- **Example 2:**
  - Input array: `[3, 4, 2, -2, 3]`
  - Subarrays with sum 6: `[3, 4, -2, 3]`, `[4, 2]`, `[2, -2, 3]`
  - Number of such subarrays: `3`

