class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        

        for(int i = 0 ; i< nums.size(); i++){

           if( i+1 < nums.size()  &&  nums[i] == nums[i+1]){
               nums.erase(nums.begin() + i , nums.begin()+i+2);
               i--;
           }        
        }

        return nums;
        
    }

    // 2nd approach
    // vector<int> singleNumber(vector<int>& nums) {

    //     unordered_map<int, int> mp;

    //     for(int &num : nums){
    //         mp[num]++;
    //     }

    //     vector<int> ans;

    //     for(const auto& num : mp){

    //         if( num.second == 1) ans.push_back(num.first);         
    //     }

    //     return ans;
        
    // }

// Bit manipulation TC: O(n)
    // vector<int> singleNumber(vector<int>& nums) {

    //     // Optimal approach

    //     long long xorr = 0;

    //     for(int &number : nums){
    //         xorr ^= number;
    //     }

    //     int mask = (xorr) & (-xorr);
    //     int groupa = 0 , groupb = 0;

    //     for(int &num : nums){
    //         if(mask & num)
    //             groupa ^= num;
    //         else{
    //             groupb ^= num;
    //         }
    //     }

    //     return {groupa ,groupb};
        
    // }
};