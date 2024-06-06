class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        // rearrang possible or not??
        if(hand.size() % groupSize != 0) return false;

        // sorting
        sort(hand.begin(), hand.end());

        // Feq map

        unordered_map<int , int> mp;

        for(auto card: hand){
            mp[card]++;
        }

        // group forming

        for(int card : hand){
            if(mp[card] > 0){

                int count = mp[card];

                for(int  i = 0; i< groupSize; i++){

                    if(mp[card + i] < count){
                        return false;
                    }

                    mp[card+i] -= count;
                }
            }
        }

        return true;
        

    }
};