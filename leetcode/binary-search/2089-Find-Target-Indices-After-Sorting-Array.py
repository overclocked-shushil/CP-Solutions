class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        nums.sort()
        sidx = []
        for i in range (len(nums)):
            if nums[i] == target:
                sidx.append(i)
        sidx.sort()
        return sidx

        