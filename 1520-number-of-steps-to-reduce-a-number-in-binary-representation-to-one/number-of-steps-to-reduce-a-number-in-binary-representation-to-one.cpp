class Solution {

    //// Approach 1  -> TC: - O(n^2)
    // void addOne(std::string &s) {
    //     int i = s.length() - 1;

    //     while (i >= 0 && s[i] != '0') {
    //         s[i] = '0';
    //         i--;
    //     }

    //     if (i < 0) {
    //         s = '1' + s;
    //     } else {
    //         s[i] = '1';  // Change the current '0' to '1'
    //     }
    // }



public:
int numSteps(string s) {

    
    // //Approach 1  -> TC: - O(n^2)
    //  int operations = 0;
    //     while (s.length() > 1) {
    //         if (s.back() == '0') {
    //             // If the last character is '0', the number is even, remove the last character
    //             s.pop_back();
    //         } else {
    //             // If the last character is '1', the number is odd, add one
    //             addOne(s);
    //         }
    //         operations++;
    //     }
    //     return operations;
    // }

        // *****************************************************************************************
    // // Approach 2:  TC: -> O(n)
        int operations = 0;
        int carry = 0;
        for(int i = s.length()-1 ; i >= 1; i--){
            if( (s[i] - '0' + carry) % 2 == 1){           
                operations += 2;
                carry = 1;
            }
            else{
                operations++;
            }
        }
        return operations + carry;
    }
// *********************************************************************************************

// Approach 3  -> O(n^2)
    //     int steps = 0;
        
    //     while (s.length() > 1) {
    //         if (s.back() == '0') {
    //             // If the last character is '0', the number is even, remove the last character
    //             s.pop_back();
    //         } else {
    //             // If the last character is '1', the number is odd, we need to add 1
    //             // Perform addition manually to handle the carry
    //             int i = s.length() - 1;
    //             while (i >= 0 && s[i] == '1') {
    //                 s[i] = '0';
    //                 i--;
    //             }
    //             if (i >= 0) {
    //                 s[i] = '1';
    //             } else {
    //                 // If all characters were '1', prepend '1' to the string
    //                 s.insert(s.begin(), '1');
    //             }
    //         }
    //         steps++;
    //     }
        
    //     return steps;

    // }
};
