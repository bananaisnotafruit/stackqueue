class queue{
    struct elem{
        int data;
        elem* next;
    };
    //beginning and end pointers
    elem* beg = NULL;
    elem* end = NULL;
    public:
    //pop an object from the beginning
    void pop(){
        if(end==NULL){cout<<"Empty queue.";return;}
        cout<<"Popping ";
        cout<<beg->data<<endl;
        if(end==beg){
            delete end;
            end = NULL;
            beg = NULL;
            return;
        }
        elem* temp = beg;
        elem* cur = end;
        //traverse to the second element
        while(cur->next != beg){cur=cur->next;}
        beg = cur;
        delete temp;
    }
    //push an object to the end
    void push(int a){
        elem* ele = new elem;
        ele->next=end;
        ele->data=a;
        end = ele;
        if(beg==NULL){beg=ele;}
    }
    //display all elements of the queue
    void display(){
        elem* cur = end;//temporary cursor
        while(cur!=NULL){
            cout<<cur->data<<" ";
            cur=cur->next;
        }
        cout<<endl;
    }
 }obj;
 
 class stack{
    struct ele{
        int data;
        ele* next;
    };
    ele* top = NULL;
    public:
    void push(int a){
        ele* elem = new ele;
        elem -> next = top;
        elem -> data = a;
        top = elem;
    }

    void pop(){
        if(top == NULL){cout<<"Empty list";return;}
        cout<<top->data<<endl;
        ele* temp = top;
        top = top->next;
        delete temp;
    }

    void display(){
        ele* cur = top;
        while(cur!=NULL){
            cout<<cur->data<<" ";
            cur=cur->next;
        }
        cout<<endl;
    }
}obj;
 
