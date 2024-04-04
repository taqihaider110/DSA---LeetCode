class Solution {
public:
    string addBinary(string a, string b) {
        // Determine the lengths of the input binary strings
        int alen = a.size();
        int blen = b.size();

        // Padding the shorter string with leading zeros
        string s;
        if (alen > blen) {
            // If length of 'a' is greater than 'b', pad 'b' with leading zeros
            b = s.append(alen - blen, '0') + b;
        } else if (blen > alen) {
            // If length of 'b' is greater than 'a', pad 'a' with leading zeros
            a = s.append(blen - alen, '0') + a;
        }

        // Initialize variables for carry and result string
        int carry = 0;
        string ans;

        // Iterate through the strings from right to left and perform binary addition
        for (int i = a.size() - 1; i >= 0; i--) {
            // Calculate sum of current digits of 'a', 'b', and carry
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            
            // Update result string with least significant bit of sum
            ans = to_string(sum % 2) + ans;
            
            // Update carry for next iteration
            carry = sum / 2;
        }

        // If there is a carry remaining after iteration, prepend '1' to result string
        if (carry != 0) {
            ans = "1" + ans;
        }

        // Return the final result string
        return ans;
    }
};
