bool hasCycle(struct ListNode *head)
{
    struct ListNode *currentPoint = head;
    struct ListNode *visitedPoint[10000] = {0};
    int counter = 0;

    while(currentPoint != NULL)
    {
        //もし訪れた場所が新規ならリストに追加して、次のポインタに行く
        //既に追加されていたらtrueを返す
        for(int i = 0;i < counter;i++)
        {
            if(visitedPoint[i] == currentPoint)
            {
                return true;
            }
        }

        visitedPoint[counter] = currentPoint;
        counter++;
        currentPoint = currentPoint->next;
    }
    return false; //has no cycle
}
