class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        vector<pair<int, int>> projects(profits.size());
        for(int i = 0; i< projects.size() ; i++){
            projects[i] = { capital[i] , profits[i] };
        }

        // Sort the project in te basis of capital default it sort on basis of first
        sort(projects.begin(), projects.end());

        priority_queue<int> maxHeap;
        int i = 0;
       
        while( k--){

        
            while(i < profits.size() && projects[i].first <= w  ){
                maxHeap.push(projects[i].second);
                i++;
            }

            if(maxHeap.empty()){
                break;
            }

            // Adding the profit
            
            w += maxHeap.top();
            maxHeap.pop();

        }

        return w;
    }
};