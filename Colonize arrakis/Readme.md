Problem linl: https://www.hackerrank.com/contests/coderush-24-finals/challenges/the-resistance-at-arrakis

- Since each column increases by a unit for a unit time, The time it would take for a column to be fully colonized is length(array) - arr[i]
- The maximum value for length(array) - arr[i], is the time it would take to colonize arrakis, i.e length(array)-min(array).
