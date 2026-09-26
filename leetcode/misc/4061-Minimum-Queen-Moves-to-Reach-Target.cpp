class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        // only three case 2,1,0;
        int sr = source[0];
        int sc = source[1];
        int tr = target[0];
        int tc = target[1];
        if (source == target) return 0;
        else if (sr == tr || sc == tc || abs(sr - tr ) == abs(sc - tc) ){
            return 1;
        }
        else return 2;
    }
};