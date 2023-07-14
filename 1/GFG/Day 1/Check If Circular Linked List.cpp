bool isCircular(Node *head)
{
    Node * f=head,*s = head;
    while(f != NULL and f->next){
        f=f->next->next;
        s=s->next;
        if(f==s){
            // s=head;
            // while( f != s){
            //     f=f->next;
            //     s=s->next
            // }
            return true;
        }
    }
    return false;