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
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ///1- create finalSum that reference to first list
    ListNode * finalSum = l1;

    ////2- create sumptr as a reference to finalSum
    ListNode * sumptr = finalSum;
    int carry =0;

    ///3- iterate on l2
    while(l2){
        int tempSum=0;

        /// to start add
        ///1- case if sumPtr and l2 refer to the same node
        if(sumptr==l2)
            tempSum = sumptr->val+carry;
        else
            tempSum = sumptr->val+l2->val+carry;

        ///2- in case the summation is greater than or equal to 10
        if(tempSum>=10){
            sumptr->val= tempSum%10;
            carry= tempSum/10;
        } else{
            sumptr->val= tempSum;
            carry=0;
        }

        ///3- in case the next pointer is null in sumptr
        if(sumptr->next== nullptr && l2->next!= nullptr)
            sumptr->next = l2->next;
        
        sumptr = sumptr->next;
        l2 =l2->next;



    }
    ///if sum ptr still has nodes
    while (sumptr){
        int tempSum=0;
        tempSum = sumptr->val+carry;
        if(tempSum>=10){
            sumptr->val= tempSum%10;
            carry= tempSum/10;
        } else{
            sumptr->val= tempSum;
            carry=0;
        }
        sumptr=sumptr->next;
    }
    ///in case of carry is not empty

    if(carry){
        ListNode* ptr = finalSum;
        while (ptr->next!= nullptr){
            ptr=ptr->next;
        }
        ptr->next= new ListNode(carry);

    }

    return  finalSum;

}
};