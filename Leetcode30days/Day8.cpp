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
    ListNode* middleNode(ListNode* head) {
        ListNode* mid=head; ListNode* temp=head;
        while(temp!=NULL) {
            temp=temp->next;
        if(temp==NULL) return mid;
        mid=mid->next;
        temp=temp->next;
        }
        return mid;
    }
};
