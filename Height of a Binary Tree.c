int height(Node* root) {
        if (root==NULL){
            return -1;
        }
        else{
            int r=height(root->right);
            int l=height(root->left);
            if(r>l){
                return r+1;
            }
            else{
                return l+1;
            }
        }
    }
