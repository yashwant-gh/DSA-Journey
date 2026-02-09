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
    class Node{
        public:
        int data;
        Node* next;
        Node(int value){
            data=value;
            next=NULL;
        }
    };

    Node* LL(int arr[],int index,int size){
       if(index==size) return NULL;
       Node* temp= new Node(arr[index]);
       temp->next=LL(arr,index+1,size);
       return temp;
    }

    ListNode* middleNode(ListNode* head) {
        Node* Head=(Node*)head;
        Node*tp=Head;
        int size=0;
        while(tp){
            tp=tp->next;
            size++;
        }
        Node*tp2=Head;
        int i=1;
        while(tp2){
            if(i==(size/2)+1){
                return (ListNode*)tp2;
            }
            tp2=tp2->next;
            i++;
        }
        return NULL;
    }
};
