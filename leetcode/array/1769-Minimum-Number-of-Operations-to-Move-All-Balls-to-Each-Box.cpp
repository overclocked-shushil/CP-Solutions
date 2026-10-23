class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> answer(n);
        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                for (int pos = 0; pos < n; pos++) {
                    answer[pos] += abs(pos - i);
                }
            }
        }
        return answer;
    }
};