SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data > head2->data){
        SinglyLinkedListNode* t=head1;
        head1=head2;
        head2=t;
    }
    SinglyLinkedListNode* res=head1;
    while(head1!=NULL && head2!=NULL){
        SinglyLinkedListNode* temp=NULL;
        while(head1!=NULL && head1->data<=head2->data){
            temp=head1;
            head1=head1->next;
        }
        temp->next=head2;
        SinglyLinkedListNode* t1=head1;
        head1=head2;
        head2=t1;
    }
    return res;

}
