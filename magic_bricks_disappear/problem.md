# Problem Title
Magic Bricks disappear

# Description

There are N magic bricks in a line and they can be of `C` colors. if we touch `x` or more consecutive bricks of the same color, they disappear. Assume we have an infinite supply of these magic bricks (In all colors) so that we can insert bricks of any color anywhere. The program must print the smallest number of bricks `M` that must be inserted so that we can touch and make all the bricks to vanish.

## Test Cases
### Test Case 1:
#### Input:
n = 2
x = 5
bricks = [1, 1]
#### Output:
3
#### Explanation
Three bricks of color 1 must be inserted (as X = 5, we need 3 more bricks of color 1).

### Test Case 2:
#### Input:
n = 10
x = 4
bricks = [3, 3, 3, 3, 2, 3, 1, 1, 1, 3]
#### Output:
4
#### Explanation
Here X=4, So the arrangement must be as below for all the bricks to disappear. 3 3 3 3 2 2 2 2 3 1 1 1 1 3 (Here three 2 color bricks and one 1 color brick must be inserted. That is a total of 4 bricks). Now the bricks left out will be 3 3 3 3 3 3 which can be touched and they will disappear.

## Constraints
1 <= N <= 100
2 <= K <= 50
1 <= C <= N

## Output:
The program should output the value of `M`