class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        map<char,char>m;
        m['['] = ']';
        m['('] = ')';
        m['{'] = '}';
        for(char c : s){
            if(c =='(' || c=='[' || c=='{')
                st.push(c);
            else if(!st.empty() && c == m[st.top()]){
                
                    st.pop();
            }
            else
                return  false;    
        }
        bool res = st.size();
        return !res;
    }
};
