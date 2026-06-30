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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        std::vector<int> values;

        ListNode* curr = list1;
        while (curr != nullptr)
        {
            values.push_back(curr->val);
            curr = curr->next;
        }

        curr = list2;
        while (curr != nullptr)
        {
            values.push_back(curr->val);
            curr = curr->next;
        }

        std::sort(values.begin(), values.end());

        ListNode head(0);
        ListNode* tail = &head;

        for(int val : values)
        {
            tail->next = new ListNode(val);
            tail = tail->next;
        }

        return head.next;
    }
};
