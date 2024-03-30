In order to minimize length of Longest Commomn Substring of the two strings, we arrange the first string in ascending order(a->z) and the second string in descending order(z->a).

For example consider:<br/>
a = adabdfagfdak -> a = aaaabdddffgk<br/>
b = ajeacbeabhdh -> b = jhheedcbbaaa<br/>

Hence, the possible combinations of common substrings is the characters that are common in both strings. By taking the minimum frequency of each character in the two strings, we get the length of these common substrings. This ensures that we consider only the shared occurrences while determining the length of the common substrings.

Here the possible common substrings are: <br/>
a with length -> min(4,3) -> 3 <br/>
b with length -> min(1,2) -> 1 <br/>
d with length -> min(3,1) -> 2 <br/>

The maximum of these minimum frequencies will the Longest Common Substring(LCS).<br/>
max(3,1,2) -> LCS=3.

Code Explanation:
1. Initialize two frequency arrays to count the occurrences of characters in both strings.
2. Loop through each character in the strings and update the frequency arrays.
3. Declare a variable (say ans) to keep track of the maximum value.
4. Then Iterate through these frequency arrays
   - Find the minimum of these frequencies at the current index.
   - If the above value is greater than ans, then update the ans.
5. Return the ans variable which is the minium length of LCS that can be obtained.
