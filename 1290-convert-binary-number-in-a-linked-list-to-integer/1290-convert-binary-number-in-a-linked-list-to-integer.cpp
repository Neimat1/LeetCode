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
   
int getDecimalValue(ListNode* head) {
    ///1- create and initialize new node reference to head
    ListNode * node = head;
    int counterSize = -1;
    int result=0;
    ///2- calculate size of list 
    while(node!=nullptr){
        node = node->next;
        counterSize++;
    }
    node = head;
    while(node != nullptr){
        result+=(pow(2,counterSize)*node->val);
        node = node->next;
        counterSize--;
    }
    return result;
}
};