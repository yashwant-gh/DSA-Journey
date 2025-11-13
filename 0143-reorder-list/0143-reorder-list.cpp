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
    void reorderList(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* temp1=head;
        int n=arr.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            if(left==right){
                temp1->val=arr[left];
                break;
            }
            temp1->val=arr[left];
            temp1=temp1->next;
            temp1->val=arr[right];
            temp1=temp1->next;
            left++;
            right--;
        }
    }
};