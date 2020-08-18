//https://leetcode.com/problems/add-two-numbers/submissions/
ListNode *temp=NULL,*p,*l;
        int ishan,num,kk,flag=0;
        while(l1 != NULL && l2 != NULL)
        {
            if(flag == 0)
                ishan = l1->val+l2->val;
            else
                ishan = l1->val+l2->val+1;
            if(ishan >= 10)
            {
                ishan = ishan % 10;
                flag = 1;
            }else
                flag = 0;
            if(temp == NULL)
            {
                temp = new ListNode(ishan);
                p = temp;
            }
            else{
                l = new ListNode(ishan);
                p->next = l;
                p=p->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(flag == 1)
        {
            while(l1!=NULL)
            {
                if(flag == 1)
                    ishan = l1->val + 1;
                else
                    ishan = l1->val;
                if(ishan == 10)
                {
                    l = new ListNode(0);
                    flag = 1;
                    p->next = l;
                    p=p->next;
                }
                else
                {
                    l = new ListNode(ishan);
                    flag = 0;
                    p->next = l;
                    p=p->next;
                }
                l1 = l1->next;
            }
            while(l2!=NULL)
            {
                if(flag == 1)
                    ishan = l2->val + 1;
                else
                    ishan = l2->val;
                if(ishan == 10)
                {
                    l = new ListNode(0);
                    flag = 1;
                    p->next = l;
                    p=p->next;
                }
                else
                {
                    l = new ListNode(ishan);
                    flag = 0;
                    p->next = l;
                    p=p->next;
                }
                l2 = l2->next;
            }
            if(l1 == NULL && l2 == NULL && flag == 1)
            {
                l = new ListNode(1);
                flag = 0;
                p->next = l;
                p=p->next;
            }
        }else{
            while(l1 != NULL)
            {
                ishan = l1->val;
                l = new ListNode(ishan);
                p->next = l;
                p=p->next;
                l1 = l1->next;
            }
            while(l2 != NULL)
            {
                ishan = l2->val;
                l = new ListNode(ishan);
                p->next = l;
                p=p->next;
                l2 = l2->next;
            }
        }
        return temp;
