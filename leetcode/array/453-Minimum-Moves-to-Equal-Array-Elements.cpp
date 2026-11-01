class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minn = *min_element(nums.begin(), nums.end());
        int n = nums.size();
        long long sum = 0;
        for (int n : nums) {
            sum += n - minn;
        }
        return sum;
    }
};