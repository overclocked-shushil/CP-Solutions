class Solution {
public:
    void func (string digits ,int ind,string combinations,vector<string> & res,unordered_map<char, string> & digitToLetters){
        if (ind == digits.size()){
            res.push_back(combinations);
            return;
        }
        string letters = digitToLetters.at(digits[ind]);
        for (auto letter : letters){
            func (digits,ind+1,combinations+letter,res,digitToLetters);
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.empty())
            return res;
        unordered_map<char, string> digitToLetters = {
            {'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        func(digits, 0, "", res, digitToLetters);
        return res;
    }
};