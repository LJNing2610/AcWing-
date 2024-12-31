class Solution{
public:
	   void deleteNode(ListNode* node){
        ListNode*sb = node->next;
        node->val = sb->val;
        node->next = sb->next;
	}
};
