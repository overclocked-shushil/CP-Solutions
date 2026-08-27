class Solution {
public:
    int minimumSum(int num) {
        vector <int> ans; 
        while (num !=0){
            int ld = num %10;
            ans.push_back(ld);
            num= num/10;
        }
        sort(ans.begin(),ans.end());
        int num1 = ans[0]*10+ans[2];
        int num2 = ans[1]*10+ ans[3];
        return num1+num2;
        
    }
};