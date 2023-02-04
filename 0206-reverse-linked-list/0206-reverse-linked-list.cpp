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
        if(head==NULL || head->next==NULL)
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
};


//2. Recursive solution:

// void reverse(ListNode* &head, ListNode* prev, ListNode* curr){
//         if(curr != NULL){
//             reverse(head, curr, curr->next);
//             curr->next = prev;
//         }
//         else{
//             head = prev;
//         }
//     }
    
//     ListNode* reverseList(ListNode* head) {         //TC = O(N) , SC = O(1)
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         reverse(head,prev, curr);
//         return head;