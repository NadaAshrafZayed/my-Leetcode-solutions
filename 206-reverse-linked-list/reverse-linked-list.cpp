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
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* temp = curr->next; // Save next node — so we don't lose access or lose data
            curr->next = prev; // Reverse the pointer direction
            prev = curr; // Move prev forward (prepare for the next reversal.)
            curr = temp; // Move curr forward (continue loop)
        }
        return prev; // prev now points to the head of the reversed list!
                     // Each node knows exactly its next so return the prev only
    }
};