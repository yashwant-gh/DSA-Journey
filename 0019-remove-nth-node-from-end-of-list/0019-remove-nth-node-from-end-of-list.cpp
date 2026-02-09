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

ListNode* deleteNode(ListNode*&  curr,int x){
    if(x==0){
        ListNode* temp=curr->next;
        delete curr;
        return temp;
    }
    curr->next=deleteNode(curr->next,x-1);
    return curr;
}

ListNode* rev(ListNode*& head){
    ListNode* curr=head;
        ListNode* fut=NULL;
        ListNode* prev=NULL;
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        return prev;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(n--)fast=fast->next;
        if(!fast)return head->next;
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* dlt=slow->next;
        slow->next=slow->next->next;
        delete dlt;
        return head;

    }
};