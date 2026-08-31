class Solution {
public:
    void reverseString(vector<char>& s) {
        //1 int i = 0;
        // int j = s.size()-1;
        // while(i<=j){
        //     swap(s[i++],s[j--]);
        // }
         //2 reverse(s.begin(), s.end());
         stack<char>st;
         for(int i =0;i<s.size();i++){
            st.push(s[i]);
         }
         int i = 0;
         while(!st.empty()){
            s[i] = st.top();
            i++;
            st.pop();

         }  
         //return s; 
          }
};