struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
            struct ListNode *curr = (struct ListNode*)malloc(sizeof(struct ListNode));
            struct ListNode *start = (struct ListNode*)malloc(sizeof(struct ListNode));
            start = NULL;
        curr = NULL;
        int in_hand = 0;
        while((l1 != NULL) && (l2 != NULL)){
            struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->val = l1->val + l2->val + in_hand;
            in_hand = 0;

            if(p->val > 9)
            {
                in_hand = p->val / 10;
                p->val%= 10;

            }
           // p->next = NULL;
            if(start == NULL){

                curr = p;
                start = p;
            }
            else{
                curr->next = p;
                curr = p;
            }
            l1 = l1->next;
            l2 = l2->next;
        }

    if(in_hand != 0)
    {
      struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = in_hand ;
        in_hand = 0;
        p->next = NULL;
        curr->next = p;
        curr = p;

    }

    if(l1 == NULL && l2 != NULL){
        while(l2->next!=NULL){
       struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = l2->val + in_hand;
            in_hand = 0;
        p->next = NULL;
        curr->next = p;
        curr = p;
        l2 = l2->next;
        }

    }

    if(l1 !=NULL && l2 == NULL)
    {
        while(l1!=NULL){
       struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = l1->val + in_hand;
        p->next = NULL;
        curr->next = p;
        curr = p;
        l1 = l1->next;
        }
    }
     if(in_hand != 0)
    {
      struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = in_hand ;
        p->next = NULL;
        curr->next = p;
        curr = p;

    }
    curr->next = NULL;

        return start;
