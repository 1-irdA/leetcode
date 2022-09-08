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
    bool hasCycle(ListNode *head) {
        
        if (!head || !head->next) {
            return false;
        }
        ListNode * left = head, * right = head;
    
        do {
            left = left->next;
            right = right->next->next;
        } while (right && right->next && left != right);
        
        return left == right;
    }
};