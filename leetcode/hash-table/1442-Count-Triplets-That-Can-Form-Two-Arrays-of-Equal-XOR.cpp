class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans = 0;
        for (int i = 0;i<arr.size();i++){
            int xorr = 0;
            for (int k = i ;k<arr.size();k++){
                xorr ^= arr[k];
                if (xorr == 0){
                    ans+= (k-i);
                }
            }
        }
        return ans;
    }
};