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
        ListNode* start = new ListNode();    //creating a dummy node
        start->next = head;
        ListNode* slow = start;
        ListNode* fast = start;              //TC = O(N) , SC= O(1)
        
        for(int i=0;i<n;i++)
            fast = fast->next;
        
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};