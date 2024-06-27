class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        // Approach 1 : Using map to store the degree
        // By using the count of degree we can find the graph is star or not
        // if degree equal to (n-1) nodes means equal to edges.size()

        unordered_map<int, int>degree;

        for(auto &i : edges ){
            int u = i[0];
            int v = i[1];

            degree[u]++;
            degree[v]++;
        }

        for(auto j : degree){
            if(j.second == edges.size() ){
                return j.first;
            }

        }


        //  if not find the star
        return -1;



       
    }
};