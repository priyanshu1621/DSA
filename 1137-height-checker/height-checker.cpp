class Solution {
public:
    int heightChecker(vector<int>& heights) {
        

        vector<int> comp(heights);
        int count = 0;

        // sort

        sort(heights.begin() , heights.end());

        for(int i = 0; i< heights.size() ; i++){
            if(heights[i] != comp[i]){
                count++;
            }
        }

        return count;
        
    }
};