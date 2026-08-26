class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long a,b,g;
        long long ans = 0;
        long long stren;
        for (int i  = 0; i<n;i++){
            for (int j = i+1;j<n;j++){
                a = nums[i];
                b = nums[j];
                g = gcd(a,b);
                stren = a*b/(g*g);
                ans  = max(stren,ans);      
                
            }   
            
        }
        return ans;
        
    }
};