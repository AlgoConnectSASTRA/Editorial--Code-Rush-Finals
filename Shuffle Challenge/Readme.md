1. Initialize two frequency arrays to count the occurrences of characters in both strings.
2. Loop through each character in the strings and update the frequency arrays.
3. Declare a variable (say ans) to keep track of answer.
4. Then Iterate through these frequency arrays
   - Find the minimum of these frequencies at the current index.
   - If the above value is greater than ans, then update the ans.
5. Return the ans variable which is the minium length of LCS that can be obtained.
