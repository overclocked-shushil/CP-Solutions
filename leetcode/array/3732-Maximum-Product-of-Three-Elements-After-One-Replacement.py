class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        nums.sort()
        return max(nums[-1]*nums[0]*(-10**5),nums[-1]*nums[-2]*(10**5),nums[0]*nums[1]*(10**5))