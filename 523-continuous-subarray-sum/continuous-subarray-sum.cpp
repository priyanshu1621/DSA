class Solution {
public:
   bool checkSubarraySum(vector<int>& nums, int k) {
   
        unordered_map<int , int> reminder_map;
        int sum;
        reminder_map[0] = -1;

        for(int i = 0; i< nums.size(); i++){

            sum += nums[i]; 
            
            int remainder = sum % k ;

            if(reminder_map.find(remainder) != reminder_map.end()){
                if(i - reminder_map[remainder] >= 2){
                    return true;
                }
            }else{
                reminder_map[remainder] = i ;
            }
        }

        return false;




    // // Map to store the remainder when cumulative sum is divided by k
    // unordered_map<int, int> remainder_map;
    // // Initialize with remainder 0 at index -1 to handle edge case of subarrays starting at the beginning
    // remainder_map[0] = -1;
    // int sum = 0;
    // for (int i = 0; i < nums.size(); i++) {
    //     sum += nums[i];
    //     int remainder = sum % k;   
    //     // Handling negative remainders
    //     if (remainder < 0) {
    //         remainder += k;
    //     }     
    //     // Check if this remainder has been seen before
    //     if (remainder_map.find(remainder) != remainder_map.end()) {
    //         // Check if the subarray length is at least 2
    //         if (i - remainder_map[remainder] > 1) {
    //             return true;
    //         }
    //     } else {
    //         // Store the first occurrence of this remainder
    //         remainder_map[remainder] = i;
    //     }
    // }
    // // No valid subarray found
    // return false;
    // }

   }
};