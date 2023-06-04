#include <stdio.h>
#include <stdlib.h>

struct Student {
    struct Student *prev;
    int data;
    struct Student *next;
};

typedef struct Student Student;

// functions declearations

void add(Student **head, int data);
void display(Student *head);
void delete(Student **head);
void sort(Student *head);
void swap(Student *node1, Student *node2);

void swapValue(Student** head, int value1, int value2);
void swapNode(Student **head, int node1, int node2);


// ================================ main() =====================================
int main(int argc, char *argv[]) {
    Student *head = NULL;
    int value = 6;

    int choice = 0;
    while (1) {
        printf("You have the following choices:\n"
               "1. add() : Add data in Linked List.\n"
               "2. display() : Display data of Linked List.\n"
               "3. delete() : Delete the last node of Linked List.\n"
               "4. sort() : Sort the Linked List in ascending order.\n"
               "5. swapValue() : Swap any two nodes.\n"
               "6. swapNode() : Swap any two nodes.\n"
               "7. exit() : Exit the Program.\n\n"
               "Enter Your Choice: ");
        fflush(stdin);
        scanf("%d", &choice);

        switch (choice) {
            case 1:  // add data in linked list
                printf("Enter Value: ");
                fflush(stdin);
                scanf("%d", &value);
                add(&head, value);
                break;

            case 2:  // display data of linked list
                display(head);
                fflush(stdin);
                getchar();
                break;

            case 3:  // delete last node of linked list
                delete(&head);
                break;

            case 4:  // sort linked list
                sort(head);
                printf("\nLinked List sorted in ascending order.\n");
                break;
            
            case 5:  // swap by value
                int val1, val2;
                printf("Enter value 1 : ");
                fflush(stdin);
                scanf("%d", &val1);
                
                printf("Enter value 2 : ");
                fflush(stdin);
                scanf("%d", &val2);
                
                swapValue(&head, val1, val2);
                break;
            
            case 6: // swap by node
                int nde1, nde2;
                printf("Enter node 1 : ");
                fflush(stdin);
                scanf("%d", &nde1);
                
                printf("Enter node 2 : ");
                fflush(stdin);
                scanf("%d", &nde2);
                swapNode(&head, nde1, nde2);
                break;

            case 7:  // exit()
                exit(0);

            default:
                printf("\nInvalid Input.\n");
                exit(2);
        }
        fflush(stdin);
        getchar();
        system("clear");
    }

    return 0;
}

//==============================================================================
void add(Student **head, int data) {
    Student *ptr = *head;

    Student *temp = (Student *)malloc(sizeof(Student));
    temp->data = data;
    temp->next = NULL;

    if (ptr == NULL) {
        temp->prev = NULL;
        *head = temp;  // Update the head pointer correctly
    } else {
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}

//==============================================================================
void display(Student *head) {
    Student *ptr = head;
    printf("\nLinked List: [ ");
    while (ptr != NULL) {
        printf("%d", ptr->data);
        ptr = ptr->next;
        if (ptr != NULL) {
            printf(", ");
        }
    }
    printf(" ]\n");
}

//==============================================================================
void delete(Student **head) {
    if (*head == NULL) {
        printf("\nEmpty Linked List.\n");
        return;
    } else if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        Student *ptr = *head;
        while (ptr->next->next != NULL) {
            ptr = ptr->next;
        }
        free(ptr->next);
        ptr->next = NULL;
    }
}

// =============================================================================
void sort(Student *head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    int swapped;
    Student *ptr1;
    Student *lptr = NULL;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

void swap(Student *node1, Student *node2) {
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}



// =============================================================================
void swapNode(Student **head, int node1, int node2) {
    if (*head == NULL || node1 == node2) {
        return;
    }

    Student* temp1 = *head;
    Student* temp2 = *head;
    Student* nodePtr1 = NULL;
    Student* nodePtr2 = NULL;

    int count = 1;
    while (temp1 != NULL && count != node1) {
        temp1 = temp1->next;
        count++;
    }
    nodePtr1 = temp1;

    count = 1;
    while (temp2 != NULL && count != node2) {
        temp2 = temp2->next;
        count++;
    }
    nodePtr2 = temp2;

    if (nodePtr1 == NULL || nodePtr2 == NULL) {
        return;
    }

    // Update prev pointers of the nodes to be swapped
    if (nodePtr1->prev != NULL) {
        nodePtr1->prev->next = nodePtr2;
    } else {
        *head = nodePtr2;
    }

    if (nodePtr2->prev != NULL) {
        nodePtr2->prev->next = nodePtr1;
    } else {
        *head = nodePtr1;
    }

    // Update next pointers of the nodes to be swapped
    Student* temp = nodePtr1->next;
    nodePtr1->next = nodePtr2->next;
    nodePtr2->next = temp;

    // Update prev pointers of the adjacent nodes
    if (nodePtr1->next != NULL) {
        nodePtr1->next->prev = nodePtr1;
    }

    if (nodePtr2->next != NULL) {
        nodePtr2->next->prev = nodePtr2;
    }

    // Swap prev pointers of the nodes
    temp = nodePtr1->prev;
    nodePtr1->prev = nodePtr2->prev;
    nodePtr2->prev = temp;
}

// =============================================================================
void swapValue(Student **head, int value1, int value2) {
    if (*head == NULL || value1 == value2) {
        return;
    }

    Student* temp1 = *head;
    Student* temp2 = *head;
    Student* nodePtr1 = NULL;
    Student* nodePtr2 = NULL;

    while (temp1 != NULL) {
        if (temp1->data == value1) {
            nodePtr1 = temp1;
            break;
        }
        temp1 = temp1->next;
    }

    while (temp2 != NULL) {
        if (temp2->data == value2) {
            nodePtr2 = temp2;
            break;
        }
        temp2 = temp2->next;
    }

    if (nodePtr1 == NULL || nodePtr2 == NULL) {
        return;
    }

    // Swap the values of the nodes
    int temp = nodePtr1->data;
    nodePtr1->data = nodePtr2->data;
    nodePtr2->data = temp;
}

