class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        maxi = max(nums)
        idx = nums.index(maxi)
        nums.remove(maxi)
        l = []
        for i in range(len(nums)):
            if(2*nums[i] > maxi):
                l.append(nums[i])
        if (len(l) == 0):
            return idx
        else:
            return -1


