#include <bits/stdc++.h>
using namespace std;

/*class define for linked list*/
    class Node{
        public:
        int data;
        Node* next;
        public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
    };
/*Adding a new node in ll */
    Node* convertArr2ll(vector<int>arr){
        Node* head = new Node(arr[0], nullptr);
        Node* mover = head;
        for (int i = 1; i < arr.size(); i++)
        {
            Node* temp = new Node(arr[i], nullptr);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }

/*Length of ll */
int length(Node* head){
    int count = 0;
    Node* temp = head;
    while (temp)                                          
    {
        temp = temp->next;
        count++;
    }
    return count;

}
/*checking for an element*/
int check(Node* head, int val){
    Node* temp = head;
    while (temp)
    {
        if(temp->data == val) return 1;
        temp = temp->next;
    }
}
Node* removehead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removetail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

/*remove kth element*/
Node* deletek(Node* head, int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* previous = NULL;
    while(temp != NULL)
    {
        count++;
        if(count == k){
            previous->next = previous->next->next;
            free(temp);
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return head;
}
/*to remove a particular value*/
Node* removeEl(Node* head, int el) {
    if (head == NULL) return head;

    if (head->data == el) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == el) {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

Node* inserthead(Node* head, int val){
    Node* temp = new Node(val,head);
    return head;
}
/*inserting an element at tail*/
Node* inserttail(Node* head, int val){
    if(head == NULL){ 
        return new Node(val, nullptr);
    }
    Node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val, nullptr);
    temp->next = newNode;
    return head;
}

/*inserting at kth*/
Node* insertK(Node* head, int el, int k) {
    if (k <= 0) return head;

    // Insert at head
    if (k == 1) {
        return new Node(el, head);
    }

    int cnt = 1;
    Node* temp = head;

    while (temp != NULL && cnt < k - 1) {
        temp = temp->next;
        cnt++;
    }

    // If position is valid
    if (temp != NULL) {
        Node* x = new Node(el, temp->next);
        temp->next = x;
    }

    return head;
}

/*insert before a given value*/
Node* insertBeforeValue(Node* head, int el, int val) {
    if (head == NULL) {
        return NULL;
    }
    if (head->data == val) {
        return new Node(el, head);
    }
    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == val) {
            Node* x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}



/*ll head, traversal*/
int main(){
    vector<int>arr = {2,5,8,7};
    Node* head = convertArr2ll(arr);
    cout << head->data << endl;

    Node* temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << length(head) << endl;
    cout << check(head, 2) << endl;
    /*prints new head after removal*/
    head = removehead(head);
    cout << head->data << endl;
    /*prints new after tail removal*/
    head = removehead(head);
    cout << head->data << endl;
    
    
}   

