/**
 * Binary tree and its traversals.
 * 
 */
#include <iostream>

using namespace std;

struct node{
    int info;
    struct node *left;
    struct node *right;
} *root;

class BST{
    public:
    void insert(node *,node *);
    BST(){
        root = NULL;
    }
    
    void prettyPrintTree(node* , string , bool );
    void inorder(node *);
    void preorder(node *);
    void postorder(node *); 
    // node* stringTonode(string);
};

int main(){
    node *temp;
    BST bst;
    int arr[19] = {40,14,50,10,19,45,80,12,16,42,46,60,200,11,15,17,44,55,70};   
    for(int i =0; i<19 ;++i){
        
        
            temp = new node;
            temp->info = arr[i];
            bst.insert(root,temp);    
            //cout<<arr[i]<<endl;
    }
    
    bst.prettyPrintTree(root,"",true);
    bst.inorder(root);
    cout<<""<<endl;
    bst.preorder(root);
    cout<<""<<endl;
    bst.postorder(root);
    return 0;
}

void BST::insert(node *treenode, node * temp ){
    if(root == NULL){
        root = new node;
        root->info = temp->info;
        root->left = NULL;
        root->right = NULL;
        
        return;
    }
    
    if(treenode->info == temp->info){
        cout<< "Duplicate Node";
        return;
    }
    
    if(treenode->info > temp->info){
        if(treenode->left != NULL){
            insert(treenode->left,temp);
        }
        else{
            treenode->left = temp;
            return;
        }
    }
    
    if(treenode->info < temp->info){
        if(treenode->right != NULL){
            insert(treenode->right,temp);
        }
        else{
            treenode->right = temp;
            return;
        }
    }
}




void BST::prettyPrintTree(node* node, string prefix = "", bool isLeft = true) {
    if (node == nullptr) {
        cout << "Empty tree";
        return;
    }

    if(node->right) {
        prettyPrintTree(node->right, prefix + (isLeft ? "│   " : "    "), false);
    }

    cout << prefix + (isLeft ? "└── " : "┌── ") + to_string(node->info) + "\n";

    if (node->left) {
        prettyPrintTree(node->left, prefix + (isLeft ? "    " : "│   "), true);
    }
}


void BST::inorder(node *ptr){
    if(ptr == NULL){
       // cout<<"tree is empty";
    }
    else if(ptr!=NULL){
        inorder(ptr->left);
        cout<<ptr->info<<" ";
        inorder(ptr->right);
        
    }
}

void BST::preorder(node *ptr) {
   if (ptr != NULL) {
      cout<<ptr->info<<" ";
      preorder(ptr->left);
      preorder(ptr->right);
   }
}

void BST::postorder(node *ptr) {
   if (ptr != NULL) {   
      postorder(ptr->left);
      postorder(ptr->right);
      cout<<ptr->info<<" ";
   }
}