class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        set<int>s;
        for(int &x : nums){
            s.insert(x);
        }

        int maxlength = 1,length=0, prevelement = (*s.begin())-1;

        
        for(int x : s){
            if(abs(x-prevelement)==1){
                length++;                
            }else{
                maxlength = max(maxlength, length);
                length = 1;
            }
            prevelement = x;
        }
        maxlength = max(maxlength,length);
        return maxlength;

    }
};
