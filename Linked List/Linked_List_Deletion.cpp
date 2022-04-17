// Author: Yatharth Chauhan

// Delete from beginning
head = head->next;

// Delete from end
struct node *temp = head;
while (temp->next->next != NULL)
{
    temp = temp->next;
}
temp->next = NULL;

// Delete from middle
for (int i = 2; i < position; i++)
{
    if (temp->next != NULL)
    {
        temp = temp->next;
    }
}

temp->next = temp->next->next;
