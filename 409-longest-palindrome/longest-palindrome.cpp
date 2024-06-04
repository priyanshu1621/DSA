class Solution {
public:
    int longestPalindrome(string s) {

        int ans = 0;
        int f = 0;
        

        unordered_map<char, int>mp;

        for(auto it : s){
            mp[it]++;
        }

        // now for odd and even case

        for( auto i: mp){
            if(i.second & 1){
                ans += i.second - 1;
                f = 1; 
            }else{
                ans += i.second;
            }
        }


        if(f){
            ans++;
        }

        return ans;

    }
};