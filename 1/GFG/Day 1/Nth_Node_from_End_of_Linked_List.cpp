class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node *c = head,*N = head;
           while(n){
               if(!c) return -1;
               c = c->next;
               n--;
           }
           while(c){
               c= c->next;
               N = N->next;
           }
           if(N) return N->data;
           return -1;
    }
};