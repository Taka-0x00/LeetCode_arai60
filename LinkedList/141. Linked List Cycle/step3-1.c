bool hasCycle(struct ListNode *head)
{
    struct ListNode* currentNode = head;
    struct ListNode* visited[10000]={0};
    int counter=0;

    while(currentNode != NULL)
    {
        for(int i=0;i<counter;i++)
        {
            if(visited[i] == currentNode)
            {
                return true;
            }
        }
        visited[counter] = currentNode;
        counter++;
        currentNode = currentNode->next;
    }
    return false;
}

