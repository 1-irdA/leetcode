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
        
        const int FLAG = -200001;
        ListNode * pL = nullptr;
    
        for (pL = head; pL && pL->val != FLAG; pL = pL->next) {
            pL->val = FLAG;
        }
        
        return pL;
    }
};