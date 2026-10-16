class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int wata = capacityA;
        int watb = capacityB;
        int ans = 0;
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (wata < plants[i]) {
                wata = capacityA;
                ans++;
            }
            wata -= plants[i];
            i++;
            if (watb < plants[j]) {
                watb = capacityB;
                ans++;
            }
            watb -= plants[j];
            j--;
            if ( i == j){
                if (wata < plants[i] && watb < plants[j]){
                    ans++;
                }
            }
        }

        return ans;
    }
};