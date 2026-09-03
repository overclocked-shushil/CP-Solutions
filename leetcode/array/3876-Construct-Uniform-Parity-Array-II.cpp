class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = *min_element(nums1.begin(),nums1.end());
        if (mini % 2 == 1) return true;
        for (int n: nums1){
            if (n % 2 == 1) return false;
        }
        return true;
    }
};