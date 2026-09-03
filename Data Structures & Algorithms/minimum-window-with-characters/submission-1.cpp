class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size())
            return "";

        unordered_map<char, int> um, um2;

        for (char c : t)
            um[c]++;

        int l = 0;
        int count = 0;
        int ressize = INT_MAX;
        int start = 0;

        for (int r = 0; r < s.size(); r++) {

            um2[s[r]]++;

            if (um.count(s[r]) && um2[s[r]] <= um[s[r]])
                count++;

            while (count == t.size()) {

                if (r - l + 1 < ressize) {
                    ressize = r - l + 1;
                    start = l;
                }

                if (um.count(s[l]) && um2[s[l]] <= um[s[l]])
                    count--;

                um2[s[l]]--;
                l++;
            }
        }

        if (ressize == INT_MAX)
            return "";

        return s.substr(start, ressize);
    }
};