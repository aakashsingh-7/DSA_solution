class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int res = 0;
        for(int k = 0;k<32;k++){
            int count0 = 0;
            int count1=0;
            for(int &num:nums){
                if((num&(1<<k))==0){
                    count0++;
                }
                else{
                    count1++;
                }

            }
            if(count1%3==1){
                res = res|1<<k;
            }

        }
        return res;
        
    }
};