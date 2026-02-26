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
        if(!head || !head->next) return head;
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

        ListNode* temp = head;
        while(pre != nullptr && temp != nullptr){
            if(pre->val != temp->val) return false;

            temp = temp->next;
            pre = pre->next;
        }

        return true;
    }
};