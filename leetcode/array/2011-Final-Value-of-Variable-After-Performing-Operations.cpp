class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        int count1 = 0;
        if(operations.size() == 1){
            if (operations[0] =="--X"||operations[0] == "X--") return -1;
            else return 1;
        }
        for (int i = 0;i<operations.size();i++){
            if (operations[i] == "--X" ||operations[i] == "X--" ) count++;
            if (operations[i] == "++X"||operations[i] == "X++") count1++;
        }
       return count1-count;
    }
};