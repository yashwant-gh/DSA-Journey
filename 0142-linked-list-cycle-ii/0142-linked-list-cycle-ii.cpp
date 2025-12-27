/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int>mp;
        ListNode* temp=head;
        ListNode* ans=NULL;
        while(temp){
            if(mp[temp]){
                ans=temp;
                break;
            }
            mp[temp]++;
            temp=temp->next;
        }
        // if(ans) return ans;
        // return -1;
        return ans;
    }
};