class Solution:
    def countSpecialIntegers(self, nums: list[int]) -> int:
        special = {}
        for i in range (len(nums)):
            if (i ==0 or nums[i] != nums[i-1]):
                special[nums[i]] = special.get(nums[i],0)+1
            ans = 0
            for x in special:
                if (special[x] == 1):
                    ans+=1
        return ans
        