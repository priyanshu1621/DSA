
class Solution {

private:
    int solve(vector<int> &nums, unordered_map<int, int>& mp, int k, int index) {

        // base conditions
        if (index == nums.size()) {
            return 1;
        }

        // Not taken
        int result = solve(nums, mp, k, index + 1);

        // Taken
        if (!mp[nums[index] - k] && !mp[nums[index] + k]) {
            mp[nums[index]]++;

            result += solve(nums, mp, k, index + 1);

            mp[nums[index]]--;
        }

        return result;
    }

public:
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        return solve(nums, freq, k, 0) - 1;
    }
};