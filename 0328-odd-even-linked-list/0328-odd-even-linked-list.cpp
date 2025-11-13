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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> a1;
        ListNode* temp=head;
        while(temp){
            a1.push_back(temp->val);
            temp=temp->next;
        }
        // for(int i=0;i<a1.size();i++){
        //     cout<<a1[i]<<" ";
        // }
       ListNode* ans=head;
       int i=0;
       while(i<a1.size()){
        ans->val=a1[i];
        i=i+2;
        ans=ans->next;
       }
       int j=1;
       while(j<a1.size()){
        ans->val=a1[j];
        j=j+2;
        ans=ans->next;
       }
       return head;
    }
};