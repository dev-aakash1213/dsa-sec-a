// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end= n; 
        long int pos=-1;
        while(start<=end){
            int mid = (1ll*end+1ll*start)/2;
            bool ans = isBadVersion(mid);
            if(ans == true){
                pos = mid;
                end = mid-1;
            } else{
                start = mid+1;
            }
        }
        return pos;
    }
};
