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
ListNode* LL(vector<int> arr,int index,int size){
    if(index==size) return NULL;
    ListNode* temp= new ListNode(arr[index]);
    temp->next=LL(arr,index+1,size);
    return temp;
}
    ListNode* doubleIt(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int carry=0;
        int db=0;
        for(int i=arr.size()-1;i>=0;i--){
            db=2*arr[i];
            if(db +carry>9){
                arr[i]=(db+carry)%10;
                carry=(db+carry)/10;
            }
            else {
                arr[i]=db+carry;
                carry=0;
            }
        }
        ListNode* temp1=head;
        int i=0;
        while(temp1){
            temp1->val=arr[i];
            temp1=temp1->next;
            i++;
        }
        ListNode* Head;
        if(carry){
            Head=new ListNode(1);
            Head->next=head;
            head=Head;
        }
        return head;
    }
};