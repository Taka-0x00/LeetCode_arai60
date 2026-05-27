struct ListNode* detectCycle(struct ListNode* head)
{
    struct ListNode* currentPoint = head;
    struct ListNode* visited[10000] = {0};
    int visitedCounter=0;


    while(currentPoint != NULL)
    {
        for(int i=0;i<visitedCounter;i++)
        {
            if(visited[i] == currentPoint)
            {
                return currentPoint;
            }
        }

        visited[visitedCounter] = currentPoint;
        visitedCounter++;
        currentPoint = currentPoint->next;
    }

    return NULL;
}
