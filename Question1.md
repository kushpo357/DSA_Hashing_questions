# Title: Count of numbers with pre-existing permutation

## Description
Count the amount of numbers whose permutations exist in the array.

## Input
- The first line consists of a number `t` representing the number of test cases.
- For each test case:
  - The first line contains an integer `N` (size of the array).
  - The second line contains `N` integers representing the elements of the array.

## Output
For each test case, output the count of numbers whose permutations exist in the array.

## Example
### Input
2\
3\
343 433 78\
4\
89 98 66358 85366

### Output
2\
4


## Explanation
- **Example 1:**
  - Input array: `[343, 433, 78]`
  - 343 and 433 are permutations of each other
  - Number of such numbers: `2`
  
- **Example 2:**
  - Input array: `[89, 98, 66358, 85366]`
  - 89 and 98 are permutations of each other
  - 66358 and 85366 are also permutations of each other
  - Number of such numbers: `4`



