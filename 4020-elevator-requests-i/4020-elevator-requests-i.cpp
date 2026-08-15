class Solution {
public:
    int elevatorRequests(int n, vector<int>&answ) {
        int ans = 0;
        for(int i = 0;i<answ.size();i++){
            if(i == 0){
               ans += abs(answ[i]-0);
            }
            else{
                ans += abs(answ[i-1]-answ[i]);
            }
        

        }
        return ans;
    }
};