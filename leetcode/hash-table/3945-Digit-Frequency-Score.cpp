class Solution {
public:
    int digitFrequencyScore(int n) {
        vector <int > arr;
        int num = n;
        int sum = 0;
        while (num !=0){
            int ld  = num % 10;
            arr.push_back(ld);
            num = num/10;
         }
        
        unordered_map<int , int> mpp;
        for (int i = 0 ;i<arr.size() ;i++){
            mpp[arr[i]] ++;
        }
        for (auto it : mpp){
            sum = sum+ it.first*it.second;
        }
        return sum;
    }
};