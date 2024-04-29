# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1, list2):
        # Create a dummy node to start the merged list
        dummy = ListNode(0)
        current = dummy  # Pointer to the current node in the merged list

        # Traverse both lists until one is exhausted
        while list1 and list2:
            if list1.val <= list2.val:
                current.next = list1  # Append list1 node to the merged list
                list1 = list1.next  # Move to the next node in list1
            else:
                current.next = list2  # Append list2 node to the merged list
                list2 = list2.next  # Move to the next node in list2
            current = current.next  # Move the current pointer

        # Append any remaining nodes from list1 or list2
        if list1:
            current.next = list1  # Connect the rest of list1 to the merged list
        if list2:
            current.next = list2  # Connect the rest of list2 to the merged list

        return dummy.next  # Return the head of the merged list (excluding the dummy node)
