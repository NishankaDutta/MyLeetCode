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
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head->next ==NULL)
            return head;
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {          //TC = O(N/2)+O(N/2)+O(N/2) = O(N) , SC = O(1)
        if(head == NULL || head->next == NULL)
            return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){  //To find middle of linked list
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseList(slow->next);   //Reversing the right half of the linked list
        slow = slow->next;                // taking slow pointer to the right half of the list
        
        while(slow != NULL){             //checking if right half of the list is same as left half
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
};

