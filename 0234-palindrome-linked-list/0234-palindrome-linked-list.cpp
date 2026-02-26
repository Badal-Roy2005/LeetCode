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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* pre = nullptr;
        ListNode* post = nullptr;
        ListNode* cur = slow->next;

        while(cur){
            post = cur->next;
            cur->next = pre;
            pre = cur;
            cur = post;
        }

        ListNode* first = head;
        ListNode* second = pre;
        while(second){
            if(first->val != second->val) return false;

            second = second->next;
            first = first->next;
        }

        return true;
    }
};