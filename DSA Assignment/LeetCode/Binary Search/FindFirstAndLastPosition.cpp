class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret(2,-1);
        if(nums.size() == 0) return ret;
        int start = 0; int end = nums.size()-1;

        // Searching in Left
        while(start < end){
            int mid = start + (end-start)/2;
            if(nums[mid] < target) start = mid+1;
                else end = mid;
        }

        if(nums[start]!=target) return ret;
        else ret[0] = start;

        // Searching in Right
        end = nums.size()-1;

        while(start < end){
            int mid = start + (end-start)/2+1;
            if(nums[mid]>target) end = mid-1;
            else start = mid;
        }
        ret[1] = end;
        return ret;
    }
};
