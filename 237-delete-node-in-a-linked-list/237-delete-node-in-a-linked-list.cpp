/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
void deleteNode(ListNode* node) {
    /// in these proble we will delete node without access the head
    ////the main idea is to change the value of the current node

    ListNode * current = node;
    current->val = node->next->val;

    /// the second we will change the next pointer to the next of next

    current->next = node->next->next;

}
};