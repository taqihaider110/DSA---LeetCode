// Definition for singly-linked list
struct ListNode {
    int val; // Data in the node
    ListNode *next; // Pointer to the next node in the list
    ListNode(int x) : val(x), next(nullptr) {} // Constructor to initialize a node
};

class Solution {
public:
    // Function to detect if a cycle exists in a linked list
    bool hasCycle(ListNode *head) {
        // Initialize two pointers for the algorithm
        ListNode *slow_p = head; // Slow pointer (moves one step at a time)
        ListNode *fast_p = head; // Fast pointer (moves two steps at a time)

        // Loop while fast pointer and its next node are not null
        while (slow_p && fast_p && fast_p->next) {
            // Move slow pointer by one step
            slow_p = slow_p->next;
            
            // Move fast pointer by two steps
            fast_p = fast_p->next->next;

            // If slow pointer and fast pointer meet, there's a cycle
            if (slow_p == fast_p) {
                return true; // Cycle detected
            }
        }

        // If loop exits, no cycle was found
        return false; // No cycle detected
    }
};
