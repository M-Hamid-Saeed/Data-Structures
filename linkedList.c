#include <stdio.h>

struct Node{

        int data;
        struct Node *nxtNode;

};
struct Node* start=NULL;

struct Node* createNode(){
        struct Node* ptr;
        ptr = (struct Node*)malloc(sizeof(struct Node));
        return ptr;

}
void insertNode(int data){
        struct Node* nodeAdd;
        struct Node* temp;

        nodeAdd = createNode();
        nodeAdd->data=data;
        nodeAdd->nxtNode=NULL;

        if(start==NULL){
            start = nodeAdd;
        }
        else{
            temp = start;

            while(temp->nxtNode!=NULL)
                temp = temp->nxtNode;
            temp->nxtNode = nodeAdd;
        }

}
void deleteNode(){
        struct Node* removingNode;
        if(start==NULL)
        printf("EMPTY NODES OR LIST");
        removingNode=start;
        start= removingNode->nxtNode;
        free(removingNode);

}
void displayNodeData(){
        struct Node* temp;
        if(start==NULL)
        printf("EMPTY LIST");
        temp = start;

        while(temp !=NULL){
            printf("%d     ",temp->data);
            temp = temp->nxtNode;
    }
}
void main(){
        int choice,data;
        while(1){
        printf("\nEnter Your Choice \n 1. Insert Data \n 2. Delete Node \n 3. Traversing \n 4. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Please Enter data --> ");
                scanf("%d",&data);
                insertNode(data);
                break;
            case 2:
                deleteNode();
                break;
            case 3:
                displayNodeData();
                break;
            case 4:
                exit(0);
            default:
                printf("Please Choose from given Menu");

    }
    }
}

