struct node* insert( struct node* root, int data ) {
		if(root==NULL){
            root=(struct node*)malloc(sizeof(struct node));
            root->data=data;
            root->left=NULL;
            root->right=NULL;
            return root;
        }
        if(data < root->data){ 
            root->left=insert(root->left,data);
        }
        else{
            root->right=insert(root->right,data);
        }
        return root;
    }
