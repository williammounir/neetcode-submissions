class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        vector<int>v(temperatures.size(),0);

        for(int i = 0; i<temperatures.size(); i++){
            int t = temperatures[i];
            while(!s.empty() && t>s.top().second){
                auto p = s.top();
                v[p.first] = i-p.first;
                s.pop();
            }

            s.push({i, t});
        }
        return v;
    }
};
