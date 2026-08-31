class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>tt;
        for(int i = 0;i<s.size();i++){
            if(st.empty() && s[i]=='#'){
                continue;
            }
            else if(s[i]!='#'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        for(int i = 0;i<t.size();i++){
            if(tt.empty() && t[i]=='#'){
                continue;
            }
            else if(t[i]!='#'){
                tt.push(t[i]);
            }
            else{
                tt.pop();
            }
        }
        while(!st.empty() && !tt.empty()){
            if(st.top()==tt.top()){
                st.pop();
                tt.pop();
            }
            else{
                 return false;
            }
           
            }
        
        return  st.empty() && tt.empty();
        
    }
};