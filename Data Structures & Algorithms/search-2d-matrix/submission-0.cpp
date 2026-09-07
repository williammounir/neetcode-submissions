class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto v : matrix){
            auto p = lower_bound(v.begin(),v.end(),target);
            if(p == v.end() || *p != target)
                continue;
            return true;
        }

        return false;
    }
};
