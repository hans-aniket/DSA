#include <bits/stdc++.h>
using namespace std;


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
    cout << check(head, 2);
    
}
