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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        vector<int>arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        auto last=unique(arr.begin(),arr.end());
        arr.erase(last,arr.end());
      ListNode* Head= LL(arr,0,arr.size());
       return Head;
    }
};