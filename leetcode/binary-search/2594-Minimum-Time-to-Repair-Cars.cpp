class Solution {
public:
    long long time(vector<int>& ranks,long long mid){
        long long sum = 0;
        for (int i = 0; i<ranks.size();i++){
        long long n = sqrt(mid/ranks[i]);
        sum+=n;
        }
        return sum;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        long long mini = *min_element(ranks.begin(),ranks.end());
        long long low = 1;
        long long high = mini*1LL*cars*cars;
        while (low <= high){
            long long mid = low+(high-low )/2;
            if (time(ranks,mid) >= cars) high = mid-1;
            else low = mid+1;
        }
       return low; 
    }
};