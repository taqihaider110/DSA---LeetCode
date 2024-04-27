class ListNode {
public:
    int val; // Data in the node
    ListNode* next; // Pointer to the next node
    ListNode(int x) : val(x), next(nullptr) {} // Constructor to initialize a node with value `x`
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0); // Dummy node to start the merged list
        ListNode* current = dummy; // Pointer to keep track of the end of the merged list
        
        // While both lists have nodes
        while (list1 && list2) { 
            if (list1->val <= list2->val) { // If `list1`'s value is smaller or equal
                current->next = list1; // Append the `list1` node to the merged list
                list1 = list1->next; // Move to the next node in `list1`
            } else { // If `list2`'s value is smaller
                current->next = list2; // Append the `list2` node to the merged list
                list2 = list2->next; // Move to the next node in `list2`
            }
            current = current->next; // Move the `current` pointer to the new end
        }

        // If there are remaining nodes in `list1`, attach them to the merged list
        if (list1) {
            current->next = list1;
        }

        // If there are remaining nodes in `list2`, attach them to the merged list
        if (list2) {
            current->next = list2;
        }

        return dummy->next; // Return the merged list without the dummy node
    }
};
