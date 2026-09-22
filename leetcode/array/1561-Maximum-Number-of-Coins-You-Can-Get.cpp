class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        deque<int> queue;
        for (int n : piles) {
            queue.push_back(n);
        }
        int ans = 0;
        while (!queue.empty()) {
            queue.pop_back();
            ans += queue.back();
            queue.pop_back();
            queue.pop_front();
        }
        return ans;
    }
};