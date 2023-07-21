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
        
        if (!head || !head->next) {
            return head;
        }   
        ListNode * prev = new ListNode(-102, head);
        ListNode * tmp = head;
        ListNode * result = prev;
        int val = head->val;
        
        while (tmp) {
            if (tmp->next && tmp->val == tmp->next->val) {
                while(tmp && tmp->next && tmp->val == tmp->next->val) {
                    tmp = tmp->next;
                }
                prev->next = tmp->next;
                tmp = prev->next;
            } else{
                prev = prev->next;
                tmp = tmp->next;          
            }
        }
        return result->next;
    }
};