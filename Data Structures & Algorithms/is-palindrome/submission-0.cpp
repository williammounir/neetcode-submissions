class Solution {
public:
    bool isPalindrome(string s) {
        int leftp=0,rightp=s.size()-1;
        while(leftp<rightp){
            if(!isalnum(s[leftp])){
                leftp++;
                continue;
            }
            if(!isalnum(s[rightp])){
                rightp--;
                continue;
            }

            if(tolower(s[leftp])==tolower(s[rightp])){
                leftp++;
                rightp--;
            }
            else{
                return false;
            }

               
        }
        return true;
    }
};
