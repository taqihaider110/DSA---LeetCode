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
    ListNode* doubleIt(ListNode* head) {
        if (!head) return nullptr; // Return early if the list is empty

        // Step 1: Reverse the linked list
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        // Step 2: Double each digit and handle carry
        int carry = 0;
        ListNode* current = prev; // 'prev' is now the new head of the reversed list
        while (current) {
            int doubledValue = 2 * current->val + carry;
            current->val = doubledValue % 10;
            carry = doubledValue / 10;
            current = current->next;
        }
        
        // Step 3: Add a new node if there's a carry
        if (carry > 0) {
            ListNode* newNode = new ListNode(carry);
            // Find the last node in the reversed list
            ListNode* lastNode = prev; 
            while (lastNode->next) { 
                lastNode = lastNode->next;
            }
            lastNode->next = newNode; // Add the carry node at the end
        }

        // Step 4: Reverse the list back to its original order
        ListNode* newHead = nullptr;
        curr = prev; // 'prev' is the head of the reversed list
        while (curr) {
            ListNode* next = curr->next;
            curr->next = newHead;
            newHead = curr;
            curr = next;
        }

        return newHead; // Return the list in its original order
    }
};
