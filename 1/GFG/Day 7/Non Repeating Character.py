from collections import Counter
class Solution:
    
    #Function to find the first non-repeating character in a string.
    def nonrepeatingCharacter(self,s):
        freq = Counter(s)
 
        # Traverse the string
        for i in s:
            if(freq[i] == 1):
                return i
        return '$'

