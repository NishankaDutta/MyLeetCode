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
 
class mycmp{
    public:
        bool operator() (ListNode* a, ListNode* b){
            return a->val > b->val;
        }
};
                        //TC = O(NlogK), k is the size of heap, N is total elements , SC = O(K)
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {            
        priority_queue<ListNode*, vector<ListNode*>, mycmp> pq;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        
        for(int i=0;i<lists.size();i++){ 
            if(lists[i] != NULL){       
                pq.push(lists[i]);
            }
        }
        
        while(pq.size() != NULL){
            ListNode* temp = pq.top();
            tail->next = temp;
            tail = temp;
            pq.pop();
            
            if(temp->next != NULL){
                pq.push(temp->next);
            }
        }
        return dummy->next;
    }
};