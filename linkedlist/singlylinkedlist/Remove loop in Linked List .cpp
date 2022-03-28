class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
      
        
            Node* low=head;
            Node* high=head;
            while(high!=NULL&&high->next!=NULL)
            {
                low=low->next;
                high=high->next->next;
                if(low==high)
                {
                   break;
                }
                
            }
               if(low!=high)
               {
                   return;
               }
               if(low==head)
               {
                   while(high->next!=low)
                   {
                       high=high->next;
                   }
                   high->next=NULL;
                   return;
               }
               low=head;
               while(high->next!=low->next)
               {
                   high=high->next;
                   low=low->next;
               }
               high->next=NULL;
    }
};
