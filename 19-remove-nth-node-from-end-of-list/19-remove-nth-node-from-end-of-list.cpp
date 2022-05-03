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
   ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode * temp=head;
        ListNode * prev=head;
         int c=0, k=0, rem;
       if(head==NULL) 
           return 0;
         while(temp!=0) 
         {
         temp=temp->next;
         c++;

         }
rem=c-n+1;
       if(rem==1) 
           return head->next;
       temp=head;
while(temp!=0) 
 {
if(k==(rem-1)) 
{
prev->next=temp->next;
delete (temp) ;
break;
}
prev=temp;
temp=temp->next;
k++;
}
return head;
       }

};