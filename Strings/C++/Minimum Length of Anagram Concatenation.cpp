class Solution { 
public:
    int minAnagramLength(string s) {
        unordered_map<char,int> count;
        for(auto c : s){
            count[c]++;
        }
        vector<int> freq;
        // int min_length = 0;
        for (auto entry : count) {
            freq.push_back(entry.second);
            // min_length = max(min_length, entry.second);
        }
        int gcd = freq[0];
        for (size_t i = 1; i < freq.size(); ++i) {
            gcd = std::gcd(gcd, freq[i]);
        }
        int sum=0;
        for(auto p: count){
            sum+=p.second;
        }
        return sum/gcd;
        // return min_length;
        // unordered_set<char>count;
        // for (char c:s){
        //     count.insert(c);
        // }
        // return count.size();
    } 
};