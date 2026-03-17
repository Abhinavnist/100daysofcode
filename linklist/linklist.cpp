#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){

    Node *Head;
    Head = NULL;
    cout<<"enter the value of n how much no. wants to enter in the linklist\n";
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter the element\n";
        cin>>arr[i];
    }

    //creation
    // for(int i =0;i<n;i++){
        
    //     if(Head == NULL){
    //         Head = new Node(arr[i]);
    //     }else{
    //         Node *temp = new Node(arr[i]);
    //         temp->next= Head;
    //         Head = temp;
    //     }
    // }
    for(int i=0 ;i<n;i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
        }
        else{
            Node *temp = new Node(arr[i]);
            Node *temp2 = Head;
            while(temp2->next != NULL){
                temp2= temp2->next;
            }
            temp2->next=temp;
        }
    }
    int count;
    cout<<"enter the count where you want to add the element in the linkllist"<<"  \n";
    cin>>count;
    for(int i=0 ;i<n;i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
        }
        else{
            Node *temp = new Node(arr[i]);
            Node *temp2 = Head;
            
            while(count !=0){
                temp2= temp2->next;
                count
            }
            temp2->next=temp;
        }
    }

    //print
    Node * temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }


    return 0;

}