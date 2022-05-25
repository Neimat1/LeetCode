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
    ListNode* reverseList(ListNode* head){
    ///1- create 3 nodes current next previous
    ListNode* next = nullptr;
    ListNode*current = head;
    ListNode* previous = nullptr;


    while(current!= nullptr){
        //1- store next nodes
        next = current->next;

        //2- put the previous to the current
        current->next = previous;

        //3- put current to previous
        //4 -put next to current to iterate again
        previous= current;
        current = next;


    }
    return previous;

}
};