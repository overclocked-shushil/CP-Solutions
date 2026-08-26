class Solution {
public:
    int xorOperation(int n, int start) {
        vector <int> nums;
        for (int i = 0; i<n;i++){
            nums.push_back( start + 2*i);
            
        }
        int xoor  = 0;
        for (int j = 0;j<n;j++){
            xoor = nums[j]^xoor;

        }

       return xoor; 
    }
};