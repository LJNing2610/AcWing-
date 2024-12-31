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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
		ListNode* sb=dummy;
		while(l1!=nullptr&&l2!=nullptr){
			if(l1->val<l2->val){
				sb->next=l1;
				l1=l1->next;
			}else{
				sb->next=l2;
				l2=l2->next;
			}
			sb=sb->next;
		}	
			if(l2!=NULL){
				sb->next=l2;
			}
			if(l1!=NULL){
				sb->next=l1;
			}  
		return dummy->next; 
	}	
};
