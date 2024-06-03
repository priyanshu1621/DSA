class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        
        while (s.length() > 1) {
            if (s.back() == '0') {
                // If the last character is '0', the number is even, remove the last character
                s.pop_back();
            } else {
                // If the last character is '1', the number is odd, we need to add 1
                // Perform addition manually to handle the carry
                int i = s.length() - 1;
                while (i >= 0 && s[i] == '1') {
                    s[i] = '0';
                    i--;
                }
                if (i >= 0) {
                    s[i] = '1';
                } else {
                    // If all characters were '1', prepend '1' to the string
                    s.insert(s.begin(), '1');
                }
            }
            steps++;
        }
        
        return steps;
    }
};
