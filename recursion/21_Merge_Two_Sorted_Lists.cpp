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
//leetcode easy
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        ListNode* head = new ListNode;
        ListNode* pre = new ListNode;
        ListNode* cur1 = new ListNode;
        ListNode* cur2 = new ListNode;
        if(list1 == NULL)   return list2;
        if(list2 == NULL)   return list1;
        if(list1->val < list2->val){
            head = list1;
            pre = head;
            cur1 = list1->next;
            cur2 = list2;
        }
        else{
            head = list2;
            pre = head;
            cur1 = list1;
            cur2 = list2->next;
        }
       
        while((cur1 != NULL)&&(cur2 != NULL)){
            if(cur1->val <= cur2->val){
                pre->next = cur1;
                pre = cur1;
                cur1 = cur1->next;
            }  
            else{
                pre->next = cur2;
                pre =cur2;
                cur2 = cur2->next;
            }
        }
        if(cur1==NULL)  pre->next = cur2;
        if(cur2==NULL)  pre->next = cur1;
        return head;
    }     
};
