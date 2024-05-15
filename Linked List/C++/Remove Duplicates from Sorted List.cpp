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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) {
            return head;// Return immediately if the list is empty
        }

        ListNode* current = head;// Start from the head of the list

        while (current!=NULL && current->next != NULL) {
            if (current->val == current->next->val) {
                // If current node's value is equal to next node's value
                ListNode* temp = current->next;// Store the duplicate node in temp
                current->next = current->next->next;// Skip the duplicate node
                delete temp;// Delete the duplicate node to free memory
            } else {
                current = current->next;// Move to the next node if no duplicate
            }
        }
        return head;// Return the head of the modified list
    }
};