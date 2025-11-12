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
ListNode* dlt(ListNode* curr,int x){
    if(x==0){
        ListNode* temp=curr->next;
        delete curr;
        return temp;
    }
    curr->next=dlt(curr->next,x-1);
    return curr;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int sz=0;
        while(temp){
            temp=temp->next;
            sz++;
        }
        int x=sz-n;
        // if(x==0) return NULL;
        // return head;
        return dlt(head,x);
        // while(x--){
        //     temp=temp->next;
        // }
        
        
    }
};