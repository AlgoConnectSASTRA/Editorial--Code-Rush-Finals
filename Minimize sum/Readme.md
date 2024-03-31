
- We know that, GCD( GCD(a,b) , c) is GCD (a,b,c).
- Thus, GCD( GCD(a,b) , a) = GCD( GCD(a,b),b) = GCD(a,b)
  - We can replace any 2 elements with their GCDs. 
- We also know that, GCD(a,b,c...n) <= min(a,b,c....n)
- Therefore, it's easy to see that we can replace all the elements of the array with GCD of all the elements to obtain least possible sum.

We start by initializing ans with A[0]. Then, we iterate through the array, updating ans.
Finally, it returns the product of the array's length n and the ans, representing the minimum possible sum of the array.

