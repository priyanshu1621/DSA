class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        vector<pair<int, int>> projects(profits.size());
        for(int i = 0; i< projects.size() ; i++){
            projects[i] = { capital[i] , profits[i] };
        }

        // Sort the project in te basis of capital default it sort on basis of first
        sort(projects.begin(), projects.end());     // ->   O(Nlog(n)) -> N = size of size

        priority_queue<int> maxHeap;
        int i = 0;
       
        while( k--){

            // Checking the capital values with w and also that the i should not go out of bound
        
            while(i < profits.size() && projects[i].first <= w  ){
                maxHeap.push(projects[i].second);         // heap push || pop -> O(Nlog(n)) , here N = K , and log(n) = is heap operation complexity
                i++;
            }

            // If the heap is empty break
            if(maxHeap.empty()){
                break;
            }

            // Adding the profit
            
            w += maxHeap.top();
            maxHeap.pop();

        }  

        // Total TC:->  O(Nlog(n))  + O(Nlog(n))  =  O(Nlog(n))
        // SC  -> vector<> -> o(n)  +  Heap -> O(n)  =    O(n)


        return w;
    }
};