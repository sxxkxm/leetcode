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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        ListNode* temp;
        
        // loop untill there is no next node.
        while(curr && curr->next){
            
            // if they are the same, delete next node
            // and link to the node after the next node.
            if(curr->val == curr->next->val){
                temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }else{
                // if they don't match, move to the next node.
                curr = curr->next;
            }
        }
        
        return head;
    }
};