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
// ListNode* LL(vector<int>arr,int index,int size){
//     if(index==size) return NULL;
//     ListNode* temp=new ListNode(arr[index]);
//     temp->next=LL(arr,index+1,size);
//     return temp;
// }
    ListNode* mergeNodes(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        int count=0;
        while(temp){
            if(temp->val==0 && temp!=head){
                ans.push_back(count);
                count=0;
            }
            count+=temp->val;
            temp=temp->next;
        }
        ListNode* temp1=head;
        for(int i=0;i<ans.size();i++){
            if(i==ans.size()-1){
                temp1->val=ans[i];
                temp1->next=NULL;
                break;
            }
            temp1->val=ans[i];
            temp1=temp1->next;
        }
        return head;
    }
};