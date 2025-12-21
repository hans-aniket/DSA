#include <bits/stdc++.h>
using namespace std;
/*basic structure for DLL*/
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
/*conversion of a vector/array to linked list*/
Node* convertarrto2dll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
/* to delete head of a DLl */
Node* deletehead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}
/*deleting tail of a dll*/
Node* deletetail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;

    }
    Node* newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}
/*delete kth element*/
Node* deletekthele(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        if(count == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    if(prev == NULL && front == NULL){
        delete temp;
        return NULL;
    }
    else if(prev = NULL){
        return deletehead(head);
        return;
    }
    else if(front == NULL){
        return deletetail(head);
    }
    else{
        prev->next = front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return head;

    }
}
/*Delete the node of DLL*/
Node* deleteanode(Node*temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }

    prev->next = front;
    front->back = prev;
    temp->next = temp->back = nullptr;
    free(temp);
}
/*Inserting a new node before head*/
Node* inserthead(Node* head, int val){
    Node* newHead = new Node(val, head, nullptr);
    head->back = newHead;
    return newHead;
}
/*inserting a node before a tail*/
Node* inserttail(Node* head, int val){
    if(head->next == NULL){
        return inserttail(head,val);
    }
    Node* tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newNODE = new Node(val, tail, prev);
    prev->next = newNODE;
    tail->back = newNODE;
    return head;
}
/*inserting before kth element*/
Node* insertingbeforekth(Node* head, int k , int val){
    if(k == 1){
        return inserthead(head,val);
    }
    Node* temp = head;
    int count = 0;
    while(temp!= NULL){
        count++;
        if(count == k) break;
        temp = temp->next;

    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
void insertbeforenode(Node* node, int val){
    Node* prev = node->back;
    Node* newnode = new Node(val, node, prev);
    prev->next = newnode;
    node->back = newnode;
    
}
/*just a print function for DLL*/
void print(Node* head){
    
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    
}

int main(){
    vector<int>arr = {2,3,6,7,8};
    Node* head = convertarrto2dll(arr);
    print(head);
    return 0;
}