#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head;

void first(){
    struct node *ptr;
    int item;
    ptr=(struct node *) malloc(sizeof(struct node*));
    if (ptr==NULL){
        printf("\n OVERFLOW");
    }
    else {
        printf("Input Data: ");
        scanf("%d", &item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("Successfully Saved!");
    }
}

void last(){
    struct node *ptr, *temp;
    int item;
    ptr= (struct node *) malloc(sizeof(struct node*));
    if (ptr== NULL){
        printf("\n OVERFLOW");
    }
    else {
        printf("Input Data: ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL){
            ptr->next = NULL;
            head=ptr;
            printf("Successfully Saved!");
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("Successfully Saved!");
        }
    }
}

void unknown(){
    int i, loc, item;
    struct node *ptr, *temp;
    ptr=(struct node *) malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("\n OVERFLOW");
    }
    else {
        printf("Input Data: ");
        scanf("%d", &item);
        ptr->data=item;
        printf("DIMANA? ");
        scanf("%d", &loc);
        temp=head;
        for(i=0;i<loc;i++){
            temp=temp->next;
            if(temp==NULL){
                printf("\n CAN NOT SAVED");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("Successfully Saved!");
    }
}

void show(){
    struct node *ptr;
    ptr= head;
    if(ptr == NULL){
        printf("No Data!");
    }
    else{
        printf("Here's your data...");
        while(ptr != NULL){
            printf("\n%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}

int link_listed(){
    int choice = 0;
    while(choice != 5){ //5 for explicit
        system ("cls");
        printf("\n **********Menu Linked List**********\n");
        printf(" +___________________________________+\n");
        printf("\n1. Input Data First Node");
        printf("\n2. Input Data Last Node");
        printf("\n3. Input Data Unknown Node");
        printf("\n4. Show Linked List Data");
        printf("\n5. Exit");
        printf("\nYour choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1: first(); getch();break;
            case 2: last(); getch();break;
            case 3: unknown(); getch();break;
            case 4: show(); getch();break;
            case 5: exit(0); getch();break;
            default: printf("Input the right choice . . .");
        }
    }

}
