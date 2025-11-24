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
ListNode* LL(vector<int>arr,int index,int size){
    if(index==size) return NULL;
    ListNode* temp=new ListNode(arr[index]);
    temp->next=LL(arr,index+1,size);
    return temp;
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>arr;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(temp1){
            arr.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2){
            arr.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* head=LL(arr,0,arr.size());
        return head;
    }
};