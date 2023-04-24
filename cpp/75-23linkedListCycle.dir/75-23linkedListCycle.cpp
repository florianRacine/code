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
        if (head == NULL) return false;
        ListNode* tortoise = head;
        ListNode* hare = head -> next;
        while (tortoise != hare && hare != NULL && hare -> next != NULL) {
            tortoise = tortoise -> next;
            hare = hare -> next -> next;
        }
        if (tortoise == hare) return true;
        return false;
    }
};
