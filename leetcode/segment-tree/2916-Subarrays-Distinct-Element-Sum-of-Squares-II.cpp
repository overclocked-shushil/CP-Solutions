class Solution {
public:
    static const int MOD = 1e9 + 7;

    struct Node {
        long long sum = 0;
        long long sumSq = 0;
        long long lazy = 0;
    };

    vector<Node> tree;
    int n;

    void apply(int node, int l, int r) {
        long long len = r - l + 1;
        long long s = tree[node].sum;

        tree[node].sumSq =
            (tree[node].sumSq + 2 * s + len) % MOD;

        tree[node].sum = (s + len) % MOD;
        tree[node].lazy++;
        tree[node].lazy %= MOD;
    }

    void push(int node, int l, int r) {
        if (tree[node].lazy == 0 || l == r)
            return;

        int mid = (l + r) / 2;

        long long val = tree[node].lazy;

        updateApply(node * 2, l, mid, val);
        updateApply(node * 2 + 1, mid + 1, r, val);

        tree[node].lazy = 0;
    }

    void updateApply(int node, int l, int r, long long val) {
        long long len = r - l + 1;
        long long s = tree[node].sum;

        tree[node].sumSq =
            (tree[node].sumSq + 2 * val % MOD * s % MOD
             + val * val % MOD * len % MOD) % MOD;

        tree[node].sum = (s + val * len) % MOD;
        tree[node].lazy = (tree[node].lazy + val) % MOD;
    }

    void update(int node, int l, int r, int ql, int qr) {
        if (ql > r || qr < l)
            return;

        if (ql <= l && r <= qr) {
            apply(node, l, r);
            return;
        }

        push(node, l, r);

        int mid = (l + r) / 2;

        update(node * 2, l, mid, ql, qr);
        update(node * 2 + 1, mid + 1, r, ql, qr);

        tree[node].sum =
            (tree[node * 2].sum + tree[node * 2 + 1].sum) % MOD;

        tree[node].sumSq =
            (tree[node * 2].sumSq + tree[node * 2 + 1].sumSq) % MOD;
    }

    int sumCounts(vector<int>& nums) {
        n = nums.size();
        tree.assign(4 * n + 5, Node());

        unordered_map<int, int> last;
        long long ans = 0;

        for (int r = 0; r < n; r++) {
            int p = -1;

            if (last.count(nums[r]))
                p = last[nums[r]];

            update(1, 0, n - 1, p + 1, r);

            ans = (ans + tree[1].sumSq) % MOD;
            last[nums[r]] = r;
        }

        return ans;
    }
};