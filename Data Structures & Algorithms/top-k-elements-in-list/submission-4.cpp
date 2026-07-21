class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>um;
        for(int &n : nums){
            um[n]++;
        }

        priority_queue<pair<int,int>>pq;
        for(auto &p : um){
            pq.push({p.second,p.first});
        }
        int i = 0;
        while(!pq.empty()&&i<k){
            ans.push_back(pq.top().second);
            pq.pop();
            i++;
        }
        return ans;
    }
};
