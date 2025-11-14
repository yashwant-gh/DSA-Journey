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
    ListNode* swapPairs(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        for(int i=0;i<n-1;i=i+2){
            swap(arr[i],arr[i+1]);
        }
        ListNode* temp1=head;
        int i=0;
        while(temp1){
            temp1->val=arr[i];
            i++;
            temp1=temp1->next;
        }
        return head;

    }
};