struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode* currentPoint = head;

    if(currentPoint == NULL)
    {
        return NULL;
    }
    
    if(currentPoint->next == NULL)
    {
        return head;
    }

    while(currentPoint->next != NULL)
    {
        if(currentPoint->next->val == currentPoint->val)
        {
            currentPoint->next = currentPoint->next->next;
        }
        else
        {
            currentPoint = currentPoint->next;
        }
    }

    return head;
}
