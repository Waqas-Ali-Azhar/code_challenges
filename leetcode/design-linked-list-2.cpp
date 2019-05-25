#https://leetcode.com/problems/design-linked-list/

class Node{
 public:
    int val;
    Node *next;
    
};


class MyLinkedList {
public:
    Node *head;
    
    /** Initialize your data structure here. */
    MyLinkedList() {
        
      Node *head = new Node;
      head->val = 0;
      head->next = NULL;
       
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        Node *ptr = head;
        
        while(ptr->next != NULL){
            if(index==0){
                return ptr->val;
            }
            --index;
            ptr = ptr->next;
        }
        return -1;
        
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node *ptr = new Node;
        ptr->val = val;
        ptr->next = head;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *ptr = head;
        
        while( ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = new Node;
        ptr->next->val = val;
        ptr->next->next = NULL;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        
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