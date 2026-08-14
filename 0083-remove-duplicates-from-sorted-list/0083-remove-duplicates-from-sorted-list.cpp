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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int>ans;
        ListNode*prev = NULL;
        ListNode*temp = head;
        while(temp){
            if(prev == NULL || temp->val != prev->val){
                ans.push_back(temp->val);
            prev = temp;
            }
            
            temp = temp->next;

        }
        int n = ans.size();
         ListNode* hea;
    ListNode*tail;
    tail = NULL;
    hea = NULL;
     
    for(int i = 0;i<n;i++){
    if(hea == NULL){
        hea = new ListNode(ans[i]);
        tail = hea;
    }
    else{
        tail->next = new ListNode(ans[i]);
        tail = tail->next;

    }
    }
    return hea;
        
    }
};