class MyLinkedList {
public:
struct node{
    int val;
    node*next;
    node(int x)
    {
        val=x;
        next=nullptr;
    }
};
   node* head;
   int size;
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index<0||index>size-1) return -1;
        node* curr=head;
        for(int i=0;i<index;i++)
        {
           curr=curr->next;
        }
        return curr->val;
    }
    void addAtHead(int val) {
        node* temp=new node(val);
        if(head==nullptr)
        {
            head=temp;
        }
        else
        {
            temp->next=head;
            head=temp;
        }   
        size++;
    }
    
    void addAtTail(int val) {
        node* temp=new node(val);
        if(head==nullptr)
        {
            head=temp;
        }
        else
        {
            node* curr=head;
            while(curr->next)
            {
                curr=curr->next;
            }
            curr->next=temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
      if(index<0||index>size) return;
      if(index==0)
      {
        addAtHead(val);
        return;
      }
      else
      {
      node* temp=new node(val);
      node* curr=head;
      for(int i=0;i<index-1;i++)
      {
           curr=curr->next;
      }
      temp->next=curr->next;
      curr->next=temp;
      }
      size++;
     
    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>=size) return;
         node*temp;
        if(index==0)
        {
          temp=head;
          head=head->next;
          delete temp;
        }
        else
        {
            node* curr=head;
            for(int i=0;i<index-1;i++)
            {
             curr=curr->next;
            }
            temp=curr->next;
            curr->next=temp->next;
            delete temp;
        }
        size--;
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