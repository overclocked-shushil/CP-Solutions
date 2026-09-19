class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickup = 0;
        int lastm = 0;
        int lastp = 0;
        int lastg = 0;
        for (int i = 0; i < garbage.size(); i++) {
            for (char c : garbage[i]) {
                pickup++;
                if (c == 'M')
                    lastm = i;
                if (c == 'P')
                    lastp = i;
                if (c == 'G')
                    lastg = i;
            }
        }
        cout << lastm;
        cout << lastg;
        cout << lastp;
        int gtime = 0;
        int ptime = 0;
        int mtime = 0;
        int time = 0;
        for (int i = 0; i < travel.size(); i++) {
            time += travel[i];
            if (i < lastm)
                mtime += travel[i];
            if (i < lastp)
                ptime += travel[i];
            if (i < lastg)
                gtime += travel[i];
        }

        return gtime + ptime + mtime + pickup;
    }
};
