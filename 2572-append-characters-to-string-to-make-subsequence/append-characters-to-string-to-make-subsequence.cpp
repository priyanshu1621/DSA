class Solution {
public:
    int appendCharacters(string s, string t) {
        
        // 1. Finding the longest common prefix of t in s
        // 2. now find the difference of not matchng character of t in s  -> t.length - longest common Subseq of t
        

        int i = 0 , j = 0 ;
        int size_t = t.length();

        //  Longest common prefix of t in s
        while( i < s.length() && j < t.length()){
            if(s[i] == t[j]){
               
                j++;
               
            }
            i++;
        }


        cout<<"Appending character freq is: "<<(size_t-j)<<" "<<endl;
         return (size_t-j);

    }
};