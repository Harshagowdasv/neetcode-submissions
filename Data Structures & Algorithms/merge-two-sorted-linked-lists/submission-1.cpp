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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        ListNode* a=list1;
        ListNode* b=list2;

        while(a && b){
            if(a->val<=b->val){
                curr->next=a;
                a=a->next;
            }else{
                curr->next=b;
                b=b->next;
            }
            curr=curr->next;
        }

        if(a){
            curr->next=a;
        }else if(b){
            curr->next=b;
        }

        return dummy->next;
    }
};
