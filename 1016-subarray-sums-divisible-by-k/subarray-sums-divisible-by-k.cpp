class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int , int> remainder_map;
        remainder_map[0] = 1; // To handle the subarray starting from the beginning


        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
           
                sum += nums[i] ;



                int remainder = sum % k;

                 // Handle negative remainders by converting them to positive
                if(remainder < 0){
                    remainder += k;
                }

                // If this remainder has been seen before, it means there are subarrays that
                // when summed, their sum % k equals 0
               if(remainder_map.find(remainder) != remainder_map.end()) {
                    count += remainder_map[remainder];
               }

               // Increment the count of this remainder in the map
               remainder_map[remainder]++;
        }

        return count;
    }
};