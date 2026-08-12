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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int count = 0;
        ListNode*temp = head;
        while(temp!=NULL){
            count+=1;
            temp = temp->next;
        }
        n = count-n;
        if(n==0){
            temp = head;
            head = temp->next;
            delete temp;
            return head;
        }
        ListNode* curr = head;
        ListNode*prev = NULL;
        for(int i = 1;i<=n;i++){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
       delete curr;
        


        
    return head;
    }
};