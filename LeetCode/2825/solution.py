# 2825. Make String a Subsequence Using Cyclic Increments
class Solution(object):
    def canMakeSubsequence(self, str1, str2):
        j = 0
        for ch in str1:
            if j < len(str2) and (ch==str2[j] or chr(ord(ch)+1)==str2[j] or (ch=='z' and 'a'==str2[j])):
                j += 1
        return j == len(str2)
        