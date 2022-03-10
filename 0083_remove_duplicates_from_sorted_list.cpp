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
        ListNode * pL = nullptr, * tmp = nullptr;
        
        for (pL = head; pL && pL->next; pL = pL->next) {
            while (pL->next && pL->val == pL->next->val) {
                tmp = pL->next->next;
                delete pL->next;
                pL->next = tmp;
            }
        }
        return head;
    }
};