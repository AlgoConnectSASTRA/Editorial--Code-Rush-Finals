
- We know that, GCD( GCD(a,b) , c) is GCD (a,b,c).
- We also know that, GCD( GCD(a,b) , a) = GCD( GCD(a,b),b) = GCD(a,b)
- We also know that, GCD(a,b,c...n) <= min(a,b,c....n)
- Therefore, it's easy to see that we can replace all the elements of the array with GCD of all the elements to obtain least possible sum.

We start by initializing min_gcd with the GCD of the first two elements. Then, we iterate through the array, updating min_gcd with the minimum GCD found so far.
Finally, it returns the product of the array's length n and the minimum GCD, representing the minimum possible sum of the array.

