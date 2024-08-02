class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count  = 0;
        for (const auto& detail : details) {
            // Assuming the age is the 11th and 12th characters in the string
            int age = stoi(detail.substr(11, 2));
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};