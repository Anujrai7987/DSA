class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = new ListNode(0);
        start->next = head;

        ListNode* first = start;
        ListNode* second = start;

        for (int i = 0; i <= n; i++) {
            first = first->next;
        }

        while (first != NULL) {
            first = first->next;
            second = second->next;
        }

        second->next = second->next->next;

        return start->next;
    }
};