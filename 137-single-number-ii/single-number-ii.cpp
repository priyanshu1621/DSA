class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;

        for(auto i : nums){
            m[i]++;
        }

        for(auto x : m){
            if(x.second == 1){
                return x.first;
            }
        }


        //     for( auto pair : m) {
        //     std::cout << "Element " << pair.first << " appears " << pair.second << " times." << std::endl;
        // }

        return -1;
    }
};