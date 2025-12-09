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
    int pairSum(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int right=arr.size()-1;
        int left=0;
        int maxs=INT_MIN;
        while(left<right){
            if(arr[left]+arr[right]>maxs) maxs=arr[left]+arr[right];
            left++;
            right--;
        }
        return maxs;
    }
};