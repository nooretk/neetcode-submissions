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
        int s = 0;
        ListNode* curr = head;
        while (curr)
        {
            s++;
            curr = curr->next;
        }
        if (s == 1)
            return nullptr;
        curr = head;
        ListNode* prev = nullptr;
        for (int i = 0; i < s - n; i++)
        {
            prev = curr;
            curr = curr->next;
        }

        if (prev)
        {
            prev->next = curr->next;
            return head;
        } 
        else 
            return head->next;

    }
};
