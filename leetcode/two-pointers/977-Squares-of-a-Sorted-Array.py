class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        square = []
        for i in range (len(nums)):
            sq = nums[i]**2
            square.append(sq)
        square.sort()
        return square
        

        