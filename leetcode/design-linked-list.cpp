
// https://leetcode.com/problems/design-linked-list/
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class MyLinkedList {
public:
    int size = 0;
    Node* head = new Node(0);
    /** Initialize your data structure here. */
    MyLinkedList() {
        
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        cout<<index;
        cout<<size;
        if( index > size ){
            return -1;
        } 
        
        Node* ptr = this->head;
        while(index!=0){
            ptr = ptr->next;
            --index;
        }
        return ptr->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
    
         Node *ptr = new Node(val);
         ptr->next = head;
         head = ptr;    
     }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = new Node(val);
        
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        Node *ptr = head;
        while(ptr->next!=NULL && index==1){
            --index;
            ptr = ptr->next;
        }
        
        Node *temp = new Node(val);
        temp->next = ptr->next;
        ptr->next = temp;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {

        Node *ptr = head;
        while(ptr->next!=NULL && index==1){
            --index;
            ptr = ptr->next;
        }
        
        Node *temp = ptr->next;
        ptr->next = ptr->next->next;
        delete temp;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */