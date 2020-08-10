https://leetcode.com/problems/odd-even-linked-list/submissions/
ListNode *head1,*temp,*head2,*p,*l1,*l2,*head_ptr;
        int count=1;
        temp = head;
        if(head == NULL)
            return head;
        if(temp->next == NULL)
            return head;
        if(temp->next->next == NULL)
        {
            head1 = new ListNode(temp->val);
            head2 = new ListNode(temp->next->val);
            head1->next = head2;
            return head1;
        }
        if(temp->next->next != NULL)
        {
            p = new ListNode(temp->val);
            head1 = p;
            l1 = head1;
            p = new ListNode(temp->next->val);
            head2 = p;
            l2 = head2;
            temp = temp->next->next;
            while(temp!=NULL)
            {
                if(count % 2 != 0)
                {
                    p = new ListNode(temp->val);
                    l1->next = p;
                    l1 = l1->next;
                    ++count;
                }else{
                    p = new ListNode(temp->val);
                    l2->next = p;
                    l2 = l2->next;
                    ++count;
                }
                temp = temp->next;
            }
            l1->next = head2;
            return head1;
        }
        return NULL;