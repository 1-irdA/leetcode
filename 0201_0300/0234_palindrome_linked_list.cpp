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
    bool isPalindrome(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        vector<int> values;
        ListNode *p = head;
        
        while (p) {
            values.push_back(p->val);
            p = p->next;
        }
        p = head;
        uint i = values.size();

        while (--i && p->val == values[i]) {
            p = p->next;
        }
        return i == 0;
    }
};