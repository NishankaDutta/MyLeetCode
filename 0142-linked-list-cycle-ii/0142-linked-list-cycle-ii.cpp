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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)     //TC = O(N) , SC = O(1)
            return NULL;
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        bool cycleFound = false;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                cycleFound = true;
                break;
            }
        }
        
        if(!cycleFound)
            return NULL;
        
        fast = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};