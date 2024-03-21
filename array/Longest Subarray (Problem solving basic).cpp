#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'longestSubarray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

int longestSubarray(const std::vector<int>arr) {
    int n = arr.size();
    if (n <= 2) {
        return n; // If the array has 0, 1, or 2 elements, return the length of the array.
    }

    std::unordered_map<int, int> freqMap; // to store the frequency of each distinct element
    int maxLength = 0;
    int distinctCount = 0;
    int left = 0; // left pointer

    for (int right = 0; right < n; right++) {
        freqMap[arr[right]]++; // increment frequency of current element
        if (freqMap[arr[right]] == 1) {
            distinctCount++; // increment distinct element count
        }

        // If there are more than two distinct elements or the difference between distinct elements is greater than 1,
        // move the left pointer until the subarray satisfies the condition again.
        while (distinctCount > 2 || (freqMap.size() == 2 && std::abs(freqMap.begin()->first - std::next(freqMap.begin())->first) > 1)) {
            freqMap[arr[left]]--; // decrement frequency of left element
            if (freqMap[arr[left]] == 0) {
                distinctCount--; // decrement distinct element count
                freqMap.erase(arr[left]); // remove the element from the frequency map if its frequency becomes zero
            }
            left++; // move the left pointer
        }

        maxLength = std::max(maxLength, right - left + 1); // update the maximum length
    }

    return maxLength;
}
// int main() {
//     std::vector<int> arr = {1, 2, 2, 3, 3, 3, 2, 2, 1};
//     int length = longestSubarrayLength(arr);
//     std::cout << "Length of the longest subarray: " << length << std::endl;

//     return 0;
// }

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = longestSubarray(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
