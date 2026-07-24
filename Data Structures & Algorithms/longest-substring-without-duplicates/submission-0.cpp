class Solution {
public:
   int lengthOfLongestSubstring(string s) {
        if (s.empty())
            return 0;

        unordered_map<char, int> um;
        int li = 0, count = 0, maxcount = 0;

        for (int i = 0; i < s.size(); i++) {

            if (um.find(s[i]) == um.end() || um[s[i]] < li) {
               
                count++;
            } else {
              
                li = um[s[i]] + 1;
                count = i - li + 1;
            }

            um[s[i]] = i;
            maxcount = max(maxcount, count);
        }

        return maxcount;
    }
};
