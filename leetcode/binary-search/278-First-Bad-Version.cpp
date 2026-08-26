class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        while(low<n){
            int mid  = low+(n-low)/2;
            if (isBadVersion(mid) == true) n = mid;
            else low =mid+1; }
        return low;
         }
};