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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL)       //if no element in LL
            return NULL;
        if(head->next == NULL)    //If only 1 element in the LL
            return head;
        if(head->next->next == NULL)    //If only 2 elements in the LL
            return head->next;
        
        ListNode* slow = head;
        ListNode* fast = head->next;           //TC = O(n/2) == O(n) , SC = O(1)
        
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL)
                fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};