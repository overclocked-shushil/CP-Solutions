class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int n = height.size();
        int j = n - 1;
        int i = 0;
        while (i < j) {
            int len = j - i;
            int water = min(height[i], height[j]);
            int capacity = len * water;
            maxi = max(capacity, maxi);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return maxi;
    }
};