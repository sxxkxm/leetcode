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
ListNode* removeElem(ListNode* head, ListNode* prev, ListNode* curr, int val){
    
    if (curr != nullptr && curr->val == val) {
        
        if(prev == nullptr){
            head = curr->next;
            return removeElem(head, nullptr, head, val);
        }else{
            prev->next = curr->next;
            curr = curr->next;
            return removeElem(head, prev, prev->next, val);
        }
        
    }else {
        
        if(curr != nullptr && curr->next != nullptr){
            return removeElem(head, curr, curr->next, val);
        }else{
            return head;        
        }    
        
    }
}

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        return removeElem(head, nullptr, head, val);
    }
};