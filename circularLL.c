#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

// Function to create a new node
struct node *createNode() {
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the start
void insertS() {
    struct node *newNode = createNode();
    if (start == NULL) {
        start = newNode;
        newNode->next = start;  // Point to itself to form a circular list
    } else {
        struct node *temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }
        newNode->next = start;
        temp->next = newNode;
        start = newNode;  // Update start to the new node
    }
}

// Function to insert a node at the end
void insertE() {
    struct node *newNode = createNode();
    if (start == NULL) {
        start = newNode;
        newNode->next = start;
    } else {
        struct node *temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = start;
    }
}

// Function to insert a node at a specific position (middle)
void insertM() {
    int pos, i = 1;
    struct node *newNode, *temp;
    
    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    if (pos == 1) {
        insertS();
        return;
    }

    newNode = createNode();
    temp = start;

    while (i < pos - 1 && temp->next != start) {
        temp = temp->next;
        i++;
    }

    if (temp->next == start && i < pos - 1) {
        printf("Position out of range. Inserting at end.\n");
        insertE();
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a node from the start
void deleteS() {
    struct node *temp, *last;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (start->next == start) {
        free(start);
        start = NULL;
    } else {
        temp = start;
        last = start;

        while (last->next != start) {
            last = last->next;
        }

        start = start->next;
        last->next = start;
        free(temp);
    }
}

// Function to delete a node from the end
void deleteE() {
    struct node *temp, *prev;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (start->next == start) {
        free(start);
        start = NULL;
    } else {
        temp = start;
        while (temp->next != start) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = start;
        free(temp);
    }
}

// Function to delete a node from a specific position (middle)
void deleteM() {
    int pos, i = 1;
    struct node *temp, *prev;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (pos == 1) {
        deleteS();
        return;
    }

    temp = start;
    while (i < pos && temp->next != start) {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == start && i < pos) {
        printf("Position out of range.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to display the list
void display() {
    struct node *temp;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    temp = start;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != start);
    printf("\n");
}

// Main function with menu-driven interface
int main() {
    int choice;
    while (1) {
        printf("\n1. Insert at start");
        printf("\n2. Insert at end");
        printf("\n3. Insert in middle");
        printf("\n4. Delete from start");
        printf("\n5. Delete from end");
        printf("\n6. Delete from middle");
        printf("\n7. Display");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertS();
                break;
            case 2:
                insertE();
                break;
            case 3:
                insertM();
                break;
            case 4:
                deleteS();
                break;
            case 5:
                deleteE();
                break;
            case 6:
                deleteM();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Wrong input\n");
        }
    }
}


