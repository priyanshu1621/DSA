class Solution {
public:
    // int singleNumber(vector<int>& nums) {
    //     unordered_map<int, int> m;

    //     for(auto i : nums){
    //         m[i]++;
    //     }

    //     for(auto x : m){
    //         if(x.second == 1){
    //             return x.first;
    //         }
    //     }


    //     //     for( auto pair : m) {
    //     //     std::cout << "Element " << pair.first << " appears " << pair.second << " times." << std::endl;
    //     // }

    //     return -1;
    // }


    // 2Nd approach -> sorting


    // int singleNumber(vector<int>& nums) {
    //     sort(nums.begin() , nums.end());
    //     for(int i = 1 ; i < nums.size(); i+=3){
    //         if( nums[i] != nums[i-1] ) return nums[i-1];
    //     }
    //     return nums[nums.size() -1 ];
    // }


    // 3rd approach -> Bit Manipulation

    int singleNumber(vector<int>& nums) {
        
        int result = 0;
       
        for(int i = 0 ; i <= 31; i++){
            
            int temp = ( 1 << i );
            int countZeros = 0;
            int countOnes = 0;

            for(int &num : nums){
                if( (num & temp) == 0){
                    countZeros++;
                }else{
                    countOnes++;
                }
            }

            if(countOnes % 3){
            result = result | temp;  
            }
        }
    
        

        return result;
    }


};