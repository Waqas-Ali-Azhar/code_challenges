

class Node{
 public:
    int val;
    Node *next;
    
};


class MyLinkedList {
public:
    Node *head;
    int size=0;
    
    /** Initialize your data structure here. */
    MyLinkedList() {
       head->next = NULL;
    }

   
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        Node *ptr = head;
        while(ptr->next != NULL ){
            cout<<ptr->val<<"->";
            ptr = ptr->next;
        }
        
        ptr = head;
        
        while(ptr->next != NULL ){
            if(index == 1){
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
        if(head != NULL ) ptr->next = head;
        head = ptr;
        ++size;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(head != NULL){
             Node *ptr = head;
             
            while( ptr->next != NULL){
                ptr = ptr->next;
            }

            ptr->next = new Node;
            ptr->next->val = val;
            ptr->next->next = NULL;
            ++size;
        }
        else{

            Node *head = new Node;
            head->val = val;
            head->next = NULL;
            ++size;
        }
       
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        Node *ptr = head;
        if(index == size){
            addAtTail(val);
            return;
        }
        else if(index >= size) return;
        else{   
                int count = 0;
                
                while(count!=index-1){
                    ptr = ptr->next;
                    ++count;
                }
                Node *temp = ptr->next;
                ptr->next = new Node;
                ptr->next->val = val;    
                ptr->next->next = temp;
            }
    }
    
     void  print(int val){
        
        Node *ptr;
        ptr = head;
        while(ptr!=NULL){
            cout<<"->"<<ptr->val;
            ptr = ptr->next;
        }
     }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {

        Node *ptr = head;
        if(size - index < 1 ) return;
        int count = 0;
        while(count!=index){
                ptr = ptr->next;
            }

        Node *temp = ptr->next->next;
        ptr->next = temp;
    }
        
    

    // void printList(int x){
    //     Node *ptr = head;
    //     while(ptr->next != NULL){
    //         cout<<"->"<<ptr->val;
    //         ptr = ptr->next;
    //     }
    // }
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