class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        long long pro = 1;
        int zeros=0;
        int firstzero=-1;
        for(int i=0;i<nums.size();i++){
            if(!nums[i]&&firstzero==-1)
                firstzero = i;
            if(nums[i]==0){
                zeros++;
                continue;
                }
            pro*=nums[i];
        }
        if(zeros==1){
            vector<int> res(nums.size(),0);
            res[firstzero] = pro;
            return res;
        }
        if(zeros>1){
            vector<int> res(nums.size(),0);
            return res;
        }
        for(int &x:nums){
            if(x==0){
                ans.push_back(pro);
                continue;
                }
            ans.push_back(pro/x);
        }
        return ans;
    }
};
