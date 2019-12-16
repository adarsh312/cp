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
     bool value = true;
      ListNode* isPalindromecheck(ListNode* head,ListNode* tail) {
          if(tail==NULL) 
            return head;
          ListNode* result = isPalindromecheck(head,tail->next);
          if(result ->val != tail->val)
               value = false;
          return result->next;
      }
public:
    bool isPalindrome(ListNode* head) {
        // bool value = true ;
        isPalindromecheck(head,head);
        cout<< value;
       return value;
    }
    
    
};
