class Solution:
    def check(self,s):
        if (s == s[::-1]) :
            return True
        else:
            return False
    def firstPalindrome(self, words: List[str]) -> str:
        for i in range (len(words)):
            if (self.check(words[i]) == True):
                return words[i]
            
        return ""