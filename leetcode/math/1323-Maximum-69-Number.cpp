class Solution {
public:
    int maximum69Number (int num) {
        string store = to_string(num);
        vector <int> digit;
        for (char c : store){
            digit.push_back(c-'0');
        }
        for (int i = 0;i<digit.size();i++){
            if (digit[i] == 6) {
                digit[i] = 9;
                break;
            }
        }
        string ans = "";
        for (auto n : digit){
            ans+= (n+'0');
        }

        return stoi(ans);
    }
};