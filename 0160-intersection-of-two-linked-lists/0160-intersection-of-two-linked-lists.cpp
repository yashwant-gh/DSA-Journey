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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>mp;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1 && temp2){
            if(temp1==temp2)return temp1;
            else if(mp[temp1])return temp1;
            else if(mp[temp2])return temp2;
            else{
                mp[temp1]++;
                mp[temp2]++;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        ListNode* tempa=temp1?temp1:temp2;
        while(tempa){
            if(mp[tempa])return tempa;
            mp[tempa]++;
            tempa=tempa->next;
        }
        return NULL;
    }
};