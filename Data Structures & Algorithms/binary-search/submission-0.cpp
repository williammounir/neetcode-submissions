class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto p = lower_bound(nums.begin(),nums.end(), target);
        if(p == nums.end() || *p !=target)
            return -1;
        return p - nums.begin();
    }   
};
