class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer(boxes.length());
        for (int i = 0; i < boxes.length(); i++) {
            if (boxes[i] == '1') {
                for (int newPosition = 0; newPosition < boxes.length();
                     newPosition++) {
                    answer[newPosition] += abs(newPosition - i);
                }
            }
        }
        return answer;
    }
};