class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>s;
        deque<int>d;
        vector<int>v;
        for(int i = 0;i<nums.size();i++){
            if(s.size() != k){
                s.insert(nums[i]);
                d.push_back(nums[i]);
                continue;
            }
            v.push_back(*s.rbegin());

            s.erase(s.find(d.front()));
            d.pop_front();
            s.insert(nums[i]);  
            d.push_back(nums[i]);   
        }
        v.push_back(*s.rbegin());

       return v;

    }
};
