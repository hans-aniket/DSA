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

Node* reverseDll(Node* head){
    if(head == NULL || head->next == NULL)return head; 
    Node* current = head;
    Node* prev = NULL;
    while (current != NULL)
    {
        prev = current->back;
        current->back = current->next;
        current->next = prev;
        current = current->back;
    }
    return prev->back;

}