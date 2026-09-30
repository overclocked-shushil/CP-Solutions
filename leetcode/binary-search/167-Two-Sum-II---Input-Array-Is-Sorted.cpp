class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       map <int,int> mpp;
        int n = numbers.size();
        for (int i = 0;i<n;i++){
            int x = numbers[i];
            int y = target -x;
            if (mpp.find(y) != mpp.end()){
                return {mpp[y]+1,i+1};
            }
            mpp[x] = i;

        }
        return {-1,-1};
    }
};