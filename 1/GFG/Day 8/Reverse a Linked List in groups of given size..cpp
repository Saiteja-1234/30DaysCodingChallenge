class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
         if (!head)return NULL;
        struct node* current = head;
        struct node* next = NULL;
        struct node* prev = NULL;
        int count = 0;
        while (current != NULL && count < k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
        if (next != NULL)
            head->next = reverse(next, k);
        return prev;

    }
};



// PYTHON CODE
class Solution:
    def reverse(self,head, k):
        # Code here
        if(head == None):return head
        cur = head
        cnt = 0
        nxt,prev = None,None
        while(cur is not None and cnt < k):
            nxt = cur.next
            cur.next = prev
            prev = cur
            cur = nxt
            cnt +=1
        if(nxt is not None): head.next =  self.reverse(nxt,k)
        
        return prev
