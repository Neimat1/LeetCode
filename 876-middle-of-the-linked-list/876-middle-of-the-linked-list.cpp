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
    
ListNode* middleNode(ListNode* head) {
    int counter =0;
    /// declear and initialize ptr to know te size of list
    ListNode * ptr = head;
    while(ptr){
        counter++;
        ptr = ptr->next;
    }
    
    if(counter%2)
        counter /=2;
    else
        counter = (counter+1)/2;

    while(counter!=0){
        head = head->next;
        counter--;
    }

    return  head;

}
};