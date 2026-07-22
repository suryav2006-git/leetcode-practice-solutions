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

    ListNode *reverseLL(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;

        ListNode *prev = nullptr;
        ListNode *current = head;
        ListNode *next = nullptr;

        while(current) {
            next = current -> next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode *newhead = reverseLL(slow -> next);

        ListNode *first = head;
        ListNode *second = newhead;

        while(second!=nullptr){
            if(first->val != second->val) {
                reverseLL(newhead);
                return false;
            }
            first = first -> next ;
            second = second -> next;
        } 
        reverseLL(newhead);
        return true;
    }
};




