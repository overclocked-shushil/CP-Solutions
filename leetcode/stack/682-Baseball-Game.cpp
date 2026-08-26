class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int > game;
        int sum  = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                game.push_back(game.back() + game[game.size() - 2]);
            }
            else if (operations[i] == "D") {
                game.push_back(2 * game.back());
            }
            else if (operations[i] == "C") {
                game.pop_back();
            }
            else {
                game.push_back(stoi(operations[i]));
            }
        }
        for (int j  = 0;j<game.size();j++){
            sum = sum+game[j];
        }  
        return sum; 
    } 
};