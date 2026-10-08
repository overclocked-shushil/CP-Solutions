class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.size();
        string result = "";
        int count = 0;
        int sum = 0;
        for (int i = 0; i<n;i++){
            sum += s[i] -'a';
            count++;
            if (count == k){
                result+= ('a'+ (sum%26));
                sum = 0;
                count = 0;
            }
        }
        return result;
    }
};