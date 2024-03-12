// 1171. Remove Zero Sum Consecutive Nodes from Linked List
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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* front = new ListNode(0, head);
        unordered_map<int, ListNode*> prefixSums;

        int currSum = 0;
        ListNode* curr = front;
        while(curr){
            currSum += curr->val;
            prefixSums[currSum] = curr;
            curr = curr->next;
        }

        currSum = 0;
        curr = front;
        while(curr){
            currSum += curr->val;
            curr->next = prefixSums[currSum]->next;
            curr = curr->next;
        }

        return front->next;
    }
};