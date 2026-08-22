class Solution {
public:
    bool checkDivisibility(int n) {
        long long org = n;
        long long sum  = 0;
        long long prod  =1;
        while(n>0){
            sum += n %10;
            prod *= n%10;
            n = n/10;
        }
        long long divis = sum+prod;
        if(org%divis ==0){
            return true;
        }
        else{
            return false;
        }
    }
};