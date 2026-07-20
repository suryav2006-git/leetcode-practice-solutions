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
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *current = dummy;

        int carry = 0;

        while(head1 != nullptr || head2!= nullptr || carry!=0) {
            int sum = carry;

            if(head1 != NULL) {
                sum += head1 -> val;
                head1 = head1 -> next;
            } 
            if(head2 != NULL) {
                sum += head2 -> val;
                head2 = head2 -> next;
            }
            
            carry = sum / 10;

            current -> next = new ListNode(sum % 10);
            current = current -> next;
        }
        return dummy -> next;
    }
};