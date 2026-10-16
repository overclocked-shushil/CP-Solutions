class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int rem = capacity;
        int ans = 0;
        for (int i = 0; i < plants.size(); i++) {
            if (rem < plants[i]) {
                ans += (2 * i);
                rem = capacity;
            }
            rem -= plants[i];
            ans++;
        }
        return ans;
    }
};