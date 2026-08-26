class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int curr = 0;
        int sum = 0;
        for (auto r : requests) {
            sum += abs(curr - r);
            curr = r;
        }
        return sum;
    }
};