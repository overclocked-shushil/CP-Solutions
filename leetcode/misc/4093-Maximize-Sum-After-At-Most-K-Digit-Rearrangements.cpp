class Solution {
public:
    int gain (int n){
        string s = to_string(n);
        sort (s.rbegin(),s.rend());
        int num = stoi(s);
        return num - n;
    }
    long long maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> store (n);
        long long sum = 0;
        for (int i = 0;i<n;i++){
            store[i] = gain(nums[i]);
            sum += nums[i];
        }
        sort (store.rbegin(),store.rend());
        for (int i = 0;i<k;i++){
            sum+= store[i];
        }
        return sum;
    }
};