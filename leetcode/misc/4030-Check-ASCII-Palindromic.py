class Solution:
    def isPalindromic(self, s: str) -> bool:
        ans = ""
        for i in s:
            ans+= f"{ord(i):08b}"
        if (ans[:: -1] == ans):
            return True
        else:
            return False
            