// METHOD 1

void deleteNode(LinkedListNode<int> * node) {
    if(node==NULL|| node->next==NULL)  // Check if the given list is empty.
        return;                        // if the list is empty we return nothing. 
    node->data=node->next->data;      //put the data of the next node of the given node to the given node.
    node->next=node->next->next;      // link the next value .
    
    }
    
    METHOD 2
    
    void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    LinkedListNode<int> * temp=node->next;
    node->data=temp->data;
    node->next=temp->next;
    delete temp;
    }
