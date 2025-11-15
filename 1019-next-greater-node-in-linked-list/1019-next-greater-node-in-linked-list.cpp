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
            int sum=0;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>arr[i]){
                    arr1.push_back(arr[j]);
                    sum++;
                }
                if (sum>0) break;
            }
            if(sum==0) arr1.push_back(0);
        }
        for(int i=0;i<arr1.size();i++){
            cout<<arr1[i]<<" ";
        }
        return arr1;
    }
};