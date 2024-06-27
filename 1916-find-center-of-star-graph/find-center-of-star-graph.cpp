class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        // Approach 1 : Using map to store the degree
        // By using the count of degree we can find the graph is star or not
        // if degree equal to (n-1) nodes means equal to edges.size()

        // unordered_map<int, int>degree;

        // for(auto &i : edges ){
        //     int u = i[0];
        //     int v = i[1];

        //     degree[u]++;
        //     degree[v]++;
        // }

        // for(auto j : degree){
        //     if(j.second == edges.size() ){
        //         return j.first;
        //     }

        // }


        // //  if not find the star
        // return -1;


     // Approach 2 : observation is to compare the 2 edges and see we fount the common

        vector<int> first = edges[0];   // {p, q}
        vector<int> second = edges[1]; //  {q, g}

        if(first[0] == second[0] || first[0] == second[1]){
            return first[0];
        }

        // If the ove if not found the eged then it should be the edge 1 ,
        //  as in the question it is said that star is present

        return first[1];
       
    }
};