bool hasCycle(struct ListNode *head)
{
    struct ListNode* currentPoint = head;
    struct ListNode* visited[10000];
    int counter=0;

    while(currentPoint != NULL)
    {
        for(int i=0;i<counter;i++)
        {
            if(visited[i]==currentPoint)
                return true;
        }
        visited[counter] = currentPoint;
        counter++;
        currentPoint = currentPoint->next;
    }
    return false;
}
