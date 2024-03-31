Problem link: https://www.hackerrank.com/contests/coderush-24-finals/challenges/the-persuasion-puzzle

1. Have a variable (let's call it **result** ) for keeping track of the days where you scored the perfect score.
2. Declare a variable (let's call it **sum** ) to keep track of the T-shirts sold so far.
3. Iterate through the array,
    - Update the sum in each iteration. 
    - If the (sum/current day)*10 is equal to 10, increment the result by 1
    - Or if sum==current day, increment result by 1
        - If it's a zero-indexed array, then current day = i+1
        - If it's one-indexed, then current day = i
4. Return the result
