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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        vector<int>arr1;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size();i++){
            
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>arr[i]){
                    arr1.push_back(arr[j]);
                    
                }
                if (arr1.size()==i+1) break;
            }
            if(arr1.size()!=i+1) arr1.push_back(0);
        }
        return arr1;
    }
};