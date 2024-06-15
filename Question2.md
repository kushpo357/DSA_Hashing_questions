# Title: Longest subarray with even frequency numbers

## Description
Find the length of the longest subarray in which all numbers occur an even number of times.

## Input
- The first line consists of a number `t` representing the number of test cases.
- For each test case:
  - The first line contains an integer `N` (size of the array).
  - The second line contains `N` integers representing the elements of the array.

## Output
For each test case, output the length of the longest subarray where all numbers occur an even number of times.

## Example
### Input
2\
9\
1 2 3 2 3 5 7 7 5\
12\
5 5 5 2 2 2 3 3 2 7 7 7

### Output
8\
6

## Explanation
- **Example 1:**
  - Input array: `[1, 2, 3, 2, 3, 5, 7, 7, 5]`
  - Longest subarray with all numbers having even frequencies: `[2, 3, 2, 3, 5, 7, 7, 5]`
  - Length of this subarray: `8`
  
- **Example 2:**
  - Input array: `[5, 5, 5, 2, 2, 2, 3, 3, 2, 7, 7, 7]`
  - Longest subarray with all numbers having even frequencies: `[2, 2, 2, 3, 3, 2]`
  - Length of this subarray: `6`

