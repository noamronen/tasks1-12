
class linked_list
{ 

public:
    struct node
    {
        int data;
        node* next;
    };

    linked_list();
    linked_list(int num);
    void add(int data);
    int erase();
    void print();
    int peek();

private:
    node* head;
    int size;
};


