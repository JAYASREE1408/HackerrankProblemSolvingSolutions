SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *newnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    newnode->data=data;
    newnode->next=NULL;
    if(llist==NULL){
        return newnode;
    }
    else{
        newnode->next=llist;
        llist=newnode;
    }
    return llist;    
}
