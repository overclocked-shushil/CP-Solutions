class Solution:
    def maxProduct(self, n: int) -> int:
        digit = []
        prod = 1
        while n!=0:
            ld = n%10
            digit.append(ld)
            n = n//10
        digit.sort()
        l = len(digit)-1
        return digit[l]*digit[l-1]

        