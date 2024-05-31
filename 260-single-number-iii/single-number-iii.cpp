class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        // Optimal approach

        long long xorr = 0;

        for(int &number : nums){
            xorr ^= number;
        }

        int mask = (xorr) & (-xorr);
        int groupa = 0 , groupb = 0;

        for(int &num : nums){
            if(mask & num)
                groupa ^= num;
            else{
                groupb ^= num;
            }
        }

        return {groupa ,groupb};
        
    }
};