/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if (!head) return nullptr; // Return early if the list is empty

        // Reverse the linked list
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Traverse the reversed list to keep nodes with the maximum value
        int max_val = INT_MIN;
        ListNode* new_head = nullptr;
        ListNode* new_curr = nullptr;
        
        while (prev) {
            if (prev->val >= max_val) {
                max_val = prev->val;
                ListNode* node = new ListNode(prev->val); // Create a new node
                if (!new_head) {
                    new_head = node;
                    new_curr = node;
                } else {
                    new_curr->next = node;
                    new_curr = node;
                }
            }
            prev = prev->next;
        }

        // Reverse the list back to its original order
        prev = nullptr;
        curr = new_head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev; // `prev` is the new head
    }
};
