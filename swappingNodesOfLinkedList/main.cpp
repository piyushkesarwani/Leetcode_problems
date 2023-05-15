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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp1 = head, *temp2 = head;
        int l=1;
        ListNode *temp = head;
        while(temp->next!=NULL){
            l++;
            temp = temp->next;
        }
        for(int i = 0; i<k-1; i++){
            temp1 = temp1->next; //kth node
        }
        for(int i = 0; i<l-k; i++){
            temp2 = temp2->next;
        }
        swap(temp1->val, temp2->val);
        return head;
    }
};