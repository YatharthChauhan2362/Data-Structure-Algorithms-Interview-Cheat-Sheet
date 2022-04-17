// Author: Yatharth Chauhan

// Search a node
bool searchNode(struct Node **head_ref, int key)
{
    struct Node *current = *head_ref;

    while (current != NULL)
    {
        if (current->data == key)
            return true;
        current = current->next;
    }
    return false;
}