class Solution {
public:

    static bool cmp(pair<int , int> a, pair<int ,int> b){
        return a.first < b.first;
    }


    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>>data;
        vector<int> ans;


        for(int i = 0; i< nums.size(); i++){
            data.push_back({nums[i], i});
        }

        // sort in the vector data
        sort(data.begin() , data.end(), cmp);

        int start = 0;
        int end = nums.size() - 1;


        while(start < end){
            int sum  = (data[start].first + data[end].first);

            if(sum == target ){
                ans.push_back(data[start].second);
                ans.push_back(data[end].second);
                break;
            }
            else if(sum > target){
                end--;
            }else{
                start++;
            }
        }

        return ans;

    }
};