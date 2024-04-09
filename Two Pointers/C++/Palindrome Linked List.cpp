class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;  // Create a vector to store values of the linked list
        // Traverse the linked list and store the values in the vector
        while (head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }
        // Check if the vector is a palindrome
        for (int i = 0; i < v.size() / 2; i++) {
            if (v[i] != v[v.size() - i - 1])  // Compare elements from both ends of the vector
                return false;  // If elements don't match, return false
        }
        return true;  // If all elements match, return true
    }
};
// Let's dry run this code with an example:

// Suppose we have a linked list: 1 -> 2 -> 3 -> 2 -> 1.

// 1. Initially, `head` points to the first node of the linked list (which contains the value 1).
// 2. Inside the `while` loop, we iterate through each node of the linked list:
//    - At each node, we extract the value and push it into the vector `v`.
//    - After the loop, `v` contains: [1, 2, 3, 2, 1].
// 3. Next, we iterate through the first half of the vector using a `for` loop.
//    - At each iteration, we compare the element at index `i` with the element at the corresponding position from the end of the vector.
//    - If any pair of elements doesn't match (e.g., `v[i] != v[v.size() - i - 1]`), we return `false`.
// 4. If all pairs of elements match, we return `true`.

// In this example, since all pairs of elements match, the function will return `true`, indicating that the linked list is a palindrome.