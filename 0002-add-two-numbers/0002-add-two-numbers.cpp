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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head = new ListNode(0);
        ListNode*curr = head;
        ListNode*curr1 = l1;
        ListNode*curr2 = l2;
        int carry = 0;
        int sum ;
        while(curr1 && curr2){
            sum = ((curr1->val)+(curr2->val))+carry;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            curr1 = curr1->next;
            curr2 = curr2->next;
            carry = sum/10;

        }
        while(curr1){
            int sum = curr1->val+carry;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            carry = sum/10;
            curr1 = curr1->next;

        }
         while(curr2){
            int sum = curr2->val+carry;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            carry = sum/10;
            curr2 = curr2->next;
        }
        if (carry) {
            curr->next = new ListNode(carry);
        }

        return head->next;;
    }
};