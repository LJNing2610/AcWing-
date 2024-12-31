class Solution {
public:
    vector<int> printListReversingly(ListNode* head) {
        vector<int> sb;
        while (head) {
            sb.push_back(head->val);
            head = head->next;
        }
        return vector<int>(sb.rbegin(), sb.rend());
    }
};

