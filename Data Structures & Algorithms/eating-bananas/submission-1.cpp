class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1, r =1e9, res = 1e9;
        while(l<=r){
            long long k = (l+r)/2;
            long long hours = 0;
            for(auto &p : piles){
                hours+= (p + k - 1) / k;
            }
            if(hours<=h){
                res = k;
                r = k-1;
            }else{
                l = k+1;
            }
        }
        return res;
    }
};
