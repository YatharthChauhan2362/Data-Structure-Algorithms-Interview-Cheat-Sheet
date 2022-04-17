// Author: Yatharth Chauhan

// Insert at the beginning
struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = head;
head = newNode;

// Insert at the End
struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = NULL;

struct node *temp = head;
while (temp->next != NULL)
{
    temp = temp->next;
}

temp->next = newNode;

// Insert at the Middle
struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;

struct node *temp = head;

for (int i = 2; i < position; i++)
{
    if (temp->next != NULL)
    {
        temp = temp->next;
    }
}
newNode->next = temp->next;
temp->next = newNode;