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
    ListNode* partition(ListNode* head, int x) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            if(temp->val<x){
            arr.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(temp->val>=x) arr.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(temp){
            temp->val=arr[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};