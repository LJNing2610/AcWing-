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
    ListNode* deleteDuplication(ListNode* head) {
        ListNode* dummy=new ListNode(0);
		dummy->next=head;
		ListNode* cur=head;
        ListNode* prev=dummy;
        while(cur!=nullptr){
			if(cur->next!=nullptr&&cur->val==cur->next->val){
				while(cur->next!=nullptr&&cur->val==cur->next->val){
					cur=cur->next;
				}
			prev->next=cur->next;
			}
		else{
			prev=cur;
		}
		cur=cur->next;
    	}
		return dummy->next;
	}   
};
