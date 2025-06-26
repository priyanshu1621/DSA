class Solution {
public:

    static bool cmp(pair<int,int>a, pair<int, int>b){
        return a.first < b.first;
    }



    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>data; // pair of((value, original index))
        vector<int>ans;

        for(int i = 0; i< nums.size(); i++){
            data.push_back({nums[i],i});
        }

        // sort 
        sort(data.begin(), data.end(),cmp); //sort based on values

        int start = 0;
        int end = data.size() - 1;

        while(start < end){
            int sum = data[start].first + data[end].first;
            if(sum == target){
                ans.push_back(data[start].second);
                ans.push_back(data[end].second);
                break;
            }
            else if(sum > target){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    

        // vector<int>ans;
        // for(int i =0; i<nums.size()-1; i++){
        //     for(int j = i+1; j<nums.size(); j++){
        //         if(nums[i] + nums[j] == target)
        //             {ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;}
        //     }
        // }
        // return {};
    }
};