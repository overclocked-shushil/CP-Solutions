class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int temp = s[i] - 'a' + 1;
            while (temp != 0) {
                int ld = temp % 10;
                sum += ld;
                temp /= 10;
            }
        }
        int store = sum;
        for (int i = 1; i < k; i++) {
            int summ = 0;
            while (store != 0) {
                int ld = store % 10;
                summ += ld;
                store = store / 10;
            }
            store = summ;
        }
        return store;
    }
};