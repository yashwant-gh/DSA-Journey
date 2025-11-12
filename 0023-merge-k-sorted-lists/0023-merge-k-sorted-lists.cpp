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

 ListNode* LL(vector<int>arr,int index,int size){
    if(index==size){
        return NULL;
    }
    ListNode* temp= new ListNode(arr[index]);
    temp->next=LL(arr,index+1,size);
    return temp;
 }

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& list) {
        int n=list.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            ListNode*temp=list[i];
            while(temp){
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(arr.begin(),arr.end());
        int sz=arr.size();
        ListNode* head=NULL;
        head=LL(arr,0,sz);
        arr.clear();
        arr.shrink_to_fit();
        return head;
    }
};