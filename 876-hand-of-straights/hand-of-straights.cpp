class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
    if(hand.size() % groupSize != 0 ) return false;


    map<int,int> mp; //-> TC: nLogn

    for(auto &numHand: hand){
        mp[numHand]++;
    } 

    while(!mp.empty()){  // n*groupSize

        int curr = mp.begin()-> first; //  mp.begin give the first pair in map and 
                                      //   mp.begin()-> first givre the key value of first element 

        for(int i = 0; i < groupSize; i++){
            if(mp[curr + i] == 0){
                return false;
            }

            mp[curr+i]--;

            if(mp[curr+i ] < 1 ){
                mp.erase(curr+i);
            }
        }

    }
        return true;







        // // rearrang possible or not??
        // if(hand.size() % groupSize != 0) return false;

        // // sorting
        // sort(hand.begin(), hand.end());

        // // Feq map

        // unordered_map<int , int> mp;

        // for(auto card: hand){
        //     mp[card]++;
        // }

        // // group forming
        // // Process the sorted hand to form consecutive groups
        // for(int card : hand){
        //     if(mp[card] > 0){

        //         int count = mp[card];
        //     // Try to form a group starting with this card
        //         for(int  i = 0; i< groupSize; i++){

        //             if(mp[card + i] < count){
        //                 return false; // Not enough cards to form a consecutive group
        //             }

        //             mp[card+i] -= count; // Use the cards
        //         }
        //     }
        // }

        // return true;
        

    }
};