
### Test Case 1
**Input:**
```
1
5
123 321 213 456 654
```
**Output:**
```
5
```
**Explanation:**
123, 321, and 213 are permutations of each other.
456 and 654 are permutations of each other.
So, the total count is 5.

### Test Case 2
**Input:**
```
1
6
101 110 011 100 010 001
```
**Output:**
```
6
```
**Explanation:**
101, 110, and 011 are permutations of each other.
100, 010, and 001 are permutations of each other.
So, the total count is 6.

### Test Case 3
**Input:**
```
1
4
123 231 312 456
```
**Output:**
```
3
```
**Explanation:**
123, 231, and 312 are permutations of each other.
So, the total count is 3.

### Test Case 4
**Input:**
```
2
3
12 21 31
4
543 345 453 234
```
**Output:**
```
2
3
```
**Explanation:**
1. For the first array [12, 21, 31], 12 and 21 are permutations of each other. So, the count is 2.
2. For the second array [543, 345, 453, 234], 543, 345, and 453 are permutations of each other. So, the count is 3.

### Test Case 5
**Input:**
```
1
7
789 897 978 567 675 756 567
```
**Output:**
```
5
```
**Explanation:**
789, 897, and 978 are permutations of each other.
567, 675, and 756 are permutations of each other.
So, the total count is 5.

### Test Case 6
**Input:**
```
1
5
101 202 303 404 505
```
**Output:**
```
0
```
**Explanation:**
No numbers in the array are permutations of each other. So, the count is 0.

### Test Case 7
**Input:**
```
1
8
111 222 333 444 555 666 777 888
```
**Output:**
```
0
```
**Explanation:**
No numbers in the array are permutations of each other. So, the count is 0.

### Test Case 8
**Input:**
```
1
9
121 211 112 212 221 122 131 311 113
```
**Output:**
```
6
```
**Explanation:**
121, 211, 112, 212, 221, and 122 are permutations of each other.
131, 311, and 113 are permutations of each other.
So, the total count is 6.

These test cases cover a variety of scenarios, ensuring comprehensive testing of the solution.

Putting them together:

### Combined Test Cases
**Input:**
```
1
5
123 321 213 456 654
1
6
101 110 011 100 010 001
1
4
123 231 312 456
2
3
12 21 31
4
543 345 453 234
1
7
789 897 978 567 675 756 567
1
5
101 202 303 404 505
1
8
111 222 333 444 555 666 777 888
1
9
121 211 112 212 221 122 131 311 113
```
**Output:**
```
5
6
3
2
3
5
0
0
6
```
