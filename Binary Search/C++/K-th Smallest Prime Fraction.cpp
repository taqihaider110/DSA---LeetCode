class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<double> fractions;

        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                fractions.push_back(static_cast<double>(arr[i]) / arr[j]);
            }
        }

        sort(fractions.begin(), fractions.end());

        double kth_fraction = fractions[k - 1];

        int numerator = -1, denominator = -1;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                if (static_cast<double>(arr[i]) / arr[j] == kth_fraction) {
                    numerator = arr[i];
                    denominator = arr[j];
                    break;
                }
            }
            if (numerator != -1) break;
        }

        return {numerator, denominator};
    }
};