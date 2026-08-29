class Solution {
public:
    bool isPalindrome(ListNode* head) {

        ListNode* start = head;
        ListNode* end = head;

        // Find middle
        while(end != NULL && end->next != NULL) {
            start = start->next;
            end = end->next->next;
        }

        // Reverse second half
        ListNode* prev = NULL;
        ListNode* current = start;

        while(current != NULL) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        // Compare first half and reversed second half
        ListNode* first = head;
        ListNode* second = prev;

        while(second != NULL) {
            if(first->val != second->val) {
                return false;
            }

            first = first->next;
            second = second->next;
        }

        return true;
    }
};