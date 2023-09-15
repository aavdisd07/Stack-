#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    int number;
    struct linked_list *next;
};

typedef struct linked_list node;
node *head = NULL, *last = NULL;

void create_linked_list();
void print_linked_list();
void insert_at_last(int value);
void insert_at_first(int value);
void insert_after(int key, int value);
void delete_item(int value);
void search_item(int value);

int main()
{
    int key, value;

    // Create a linked list
    printf("Create Linked List\n");
    create_linked_list();
    print_linked_list();

    // Insert value at last position to existing Linked List
    printf("\nInsert new item at last\n");
    scanf("%d", &value);
    insert_at_last(value);
    print_linked_list();

    // Insert value at first position to existing Linked List
    printf("\nInsert new item at first\n");
    scanf("%d", &value);
    insert_at_first(value);
    print_linked_list();

    // Insert value after a defined value to existing Linked List
    printf("\nEnter a KEY (existing item of List), after that you want to insert a value\n");
    scanf("%d", &key);
    printf("\nInsert new item after %d KEY\n", key);
    scanf("%d", &value);
    insert_after(key, value);
    print_linked_list();

    // Search an item from Linked List
    printf("\nEnter an item to search it from List\n");
    scanf("%d", &value);
    search_item(value);

    // Delete value from List
    printf("\nEnter a value, which you want to delete from list\n");
    scanf("%d", &value);
    delete_item(value);
    print_linked_list();

    return 0;
}
