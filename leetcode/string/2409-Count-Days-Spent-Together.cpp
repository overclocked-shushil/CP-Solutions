class Solution {
public:
    int rank(string s) {
        int days[] = {0, 31, 59, 90, 120, 151,
                      181, 212, 243, 273, 304, 334};

        int month = stoi(s.substr(0, 2));
        int date = stoi(s.substr(3, 2));

        return days[month - 1] + date;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int start = max(rank(arriveAlice), rank(arriveBob));
        int end = min(rank(leaveAlice), rank(leaveBob));

        return max(0, end - start + 1);
    }
};