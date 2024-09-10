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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* t = head;
        ListNode* tn = t->next;
        while(tn!=nullptr){
            int x = __gcd(t->val, tn->val);
            ListNode* nnode = new ListNode(x);
            t->next = nnode;
            nnode->next = tn;
            t = tn;
            tn = tn->next;
        }
        return head;

    }
};