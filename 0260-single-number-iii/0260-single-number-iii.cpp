class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xor_r = 0;
        for(int i = 0;i<nums.size();i++){
            xor_r ^=nums[i];
            
        }
        long long mask = xor_r&(-xor_r);
        int grp_a = 0;
        int grp_b = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]&mask){
                grp_a ^=nums[i];
            }
            else{
                grp_b^=nums[i];
            }
        }
        return {grp_a,grp_b};
        
    }
};