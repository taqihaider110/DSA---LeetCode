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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int Length = length(head);
        int nodeFromBeginning = Length - n + 1;
        ListNode* prev = NULL;
        ListNode* temp = head;
        for (int i = 1; i < nodeFromBeginning; i++) {
            prev = temp;
            temp = temp->next;
        }
        if (prev == NULL) {
            head = head->next;
            return head;
        } else {
            prev->next = prev->next->next;
            return head;
        }
    }

private:
    int length(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};