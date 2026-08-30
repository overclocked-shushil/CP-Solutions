class Solution:
    def sumDecoded(self, nums: list[int]) -> int:
        mod  = (10**9)+7
        ans = 0
        for i in range(len(nums)):
            width = nums[i] % 10
            di = nums[i] // 10
            s = str(di)
            xi = int(s[:width])
            yi = int(s[width:])
            ans = (ans+pow(xi,yi,mod)) % mod
        return ans
            
