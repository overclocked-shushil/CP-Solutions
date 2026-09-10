class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        
        if len(s) == 0:
            return 0
        sign = 1
        i = 0
        if s[0] == '+' or s[0] == '-':
            if s[0] == '-':
                sign = -1
            i += 1
        result = 0
        while i < len(s) and s[i].isdigit():
            result = result * 10 + (ord(s[i]) - ord('0'))
            i += 1
        result *= sign
        if result < -2**31:
            return -2**31
        if result > 2**31 - 1:
            return 2**31 - 1
        return result