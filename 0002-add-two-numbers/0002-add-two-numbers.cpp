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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        vector<int>ans;
        int carry=0;
        int sum=0;
        int dig=0;
        while(temp1 && temp2){
            sum=temp1->val+temp2->val+carry;
            if(sum>9){
                carry=1;
                dig=sum-10;
                ans.push_back(dig);
            }
            else{
                carry=0;
                dig=sum;
                ans.push_back(dig);
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        ListNode* tempans=temp1?temp1:temp2;
        if(!tempans){
            if(carry){
                ans.push_back(carry);
                carry=0;
            }
        }
        else{
            while(tempans){
                sum=tempans->val+carry;
                if(sum>9){
                    carry=1;
                    dig=sum-10;
                    ans.push_back(dig);
                }
                else{
                    carry=0;
                    dig=sum;
                    ans.push_back(dig);
                }
                tempans=tempans->next;
            }
        }
        if(carry)ans.push_back(carry);

        int sz=ans.size();
        ListNode* head=NULL;
        head=LL(ans,0,sz);
        return head;
    }
};