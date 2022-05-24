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
    ListNode* removeElements(ListNode* head, int val) {

    ///the first create and initialize new pointer as a reference to the head;
    ListNode*node = head;
    ///1- if the list is empty OR
    /// the list have only one element and the element will removed
    if((node == nullptr) || (node->val == val && node->next == nullptr))
        return nullptr;
    while(node->next != nullptr){
        if(node->next->val == val){
            node->next = node->next->next;

        }
        else
            node = node->next;
    }

    ///if the last element === val will remove
    if(head->val== val)
        return head->next;

    return head;

}
};