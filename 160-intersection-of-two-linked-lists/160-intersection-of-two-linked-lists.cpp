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
   
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    while(headB!= nullptr){
        ListNode* A = headA;
        while(A!= nullptr){
            if(A==headB)
                return headB;
            A=A->next;

        }
        headB=headB->next;
    }

    return nullptr;

}
};