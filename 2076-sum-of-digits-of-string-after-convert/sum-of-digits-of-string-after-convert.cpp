class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        
        // Step 1: Convert each character to its alphabet position and concatenate
        for (char c : s) {
            int val = c - 'a' + 1;
            num += to_string(val);
        }
        
        // Step 2: Sum the digits and repeat k times
        while (k-- > 0) {
            int sum = 0;
            for (char c : num) {
                sum += c - '0';
            }
            num = to_string(sum);
        }
        
        return stoi(num);
    }
};
