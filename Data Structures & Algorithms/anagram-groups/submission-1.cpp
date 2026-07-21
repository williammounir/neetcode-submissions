class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>um;
        for(string s : strs){
            string initialval= s;
            sort(s.begin(),s.end());
            um[s].push_back(initialval);
        }
        for(auto x:um){
            ans.push_back(x.second);
        }
        return ans;
    }
};
