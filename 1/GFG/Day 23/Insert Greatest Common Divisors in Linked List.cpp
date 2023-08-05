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
        ListNode *nn,*tmp = head,*cur = head;
        while(tmp and tmp->next){
            int g = __gcd(tmp->val,tmp->next->val);
            nn = new ListNode(g);
            nn->next = tmp->next;
            cur = tmp->next;
            tmp->next = nn;
            tmp = cur;
            
            
        }
        return head;
    }
};