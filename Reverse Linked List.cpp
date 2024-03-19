//Reverse Linked List leetcode solution in cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        
        // Traverse through the list, reversing the pointers
        while (curr != nullptr) {
            // Store the next node
            next = curr->next;
            // Reverse the current node's pointer
            curr->next = prev;
            // Move prev and curr pointers one step forward
            prev = curr;
            curr = next;
        }
        
        // After the loop, prev will point to the new head of the reversed list
        return prev;
    }
};
