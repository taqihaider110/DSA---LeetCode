class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        // Step 1: Get the next node
        ListNode* nextNode = node->next;
        
        // Step 2: Copy the value of the next node to the current node
        node->val = nextNode->val;
        
        // Step 3: Point the current node's `next` to the `next` of `nextNode`
        node->next = nextNode->next;
        
        // Step 4: Free the memory of `nextNode`
        delete nextNode;
    }
};
