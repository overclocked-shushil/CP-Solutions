class Solution:
    def maximumMedianSum(self, nums: List[int]) -> int:
        nums.sort()
        m = 0
        for i in range (len(nums)//3):
            b = nums[-2]
            nums.pop()
            nums.pop()
            m+=b
        return m


            