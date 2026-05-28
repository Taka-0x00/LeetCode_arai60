struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode* currentPoint = head;
    struct ListNode* previousPoint = NULL;
    struct ListNode* firstPoint = NULL;

    if(currentPoint == NULL)
    {
        return NULL;
    }

    if(currentPoint->next == NULL)
    {
        return head;
    }

    while(currentPoint != NULL)
    {
        if(currentPoint->next == NULL)
        {
            if(firstPoint == NULL)
            {
                firstPoint = currentPoint;
            }
            else
            {
                previousPoint->next = currentPoint;
            }

        }
        else
        {
            if(currentPoint->next->val == currentPoint->val)
            {
                if(previousPoint != NULL)
                {
                    previousPoint->next = NULL;
                }

                while(currentPoint->next != NULL && currentPoint->next->val == currentPoint->val)
                {
                    currentPoint = currentPoint->next;
                }
            }
            else
            {
                if(firstPoint == NULL)
                {
                    firstPoint = currentPoint;
                    previousPoint = firstPoint;
                }
                else
                {
                    previousPoint->next = currentPoint;
                    previousPoint = currentPoint;
                }
            }
        }

        currentPoint = currentPoint->next;
    }

    return firstPoint;
}
