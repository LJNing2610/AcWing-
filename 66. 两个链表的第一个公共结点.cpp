/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *findFirstCommonNode(ListNode *headA, ListNode *headB) {
        ListNode *dasb=headA;
        ListNode *sb=headB;
        while(sb!=dasb){
        	sb!=NULL?sb=sb->next:sb=headA;
        	dasb!=NULL?dasb=dasb->next:dasb=headB;
		}
		return sb;
    }
};
