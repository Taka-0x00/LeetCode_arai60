struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode* headPoint = head;
    struct ListNode* currentPoint = headPoint;
    
    while(currentPoint != NULL)
    {

        if(currentPoint->next != NULL && currentPoint->val == currentPoint->next->val)
        {
            currentPoint->next = currentPoint->next->next;
        }
        else
        {
            currentPoint = currentPoint->next;
        }
    }
    
    return headPoint;
}
