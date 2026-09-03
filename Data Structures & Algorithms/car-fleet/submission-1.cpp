class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        set<pair<float,float>>s;
        stack<float>time;
        for(int i=0;i<position.size();i++){
            s.insert({position[i],speed[i]});
        }

        for(auto it = s.rbegin();it!=s.rend();it++){
            float pos = (*it).first;
            float sp = (*it).second;
            float t = (target-pos)/sp;
            if(time.empty() || t>time.top())
                time.push(t);    
        }
        return time.size();
    }
};
