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
    ListNode* reverseList(ListNode* head) {
        ListNode * prev = nullptr, * next = nullptr;
        
        while (head) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};

/*
1 2 3
next = 2, head->next = nullptr, prev = 1, head = 2
next = 3, head->next = 1, prev = 2, head = 3
next = 1, head->next = 2, prev = 3, head = nullptr
*/