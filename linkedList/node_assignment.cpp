#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node *root = NULL; // Initialize the root (head) as NULL

// (1) Insert at the beginning
void InsertFirst(int val) {
    node *temp = new node;
    temp->data = val;
    temp->next = root;
    root = temp;
}

// (2) Insert at the end
void InsertLast(int val) {
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    if (root == NULL) {
        root = temp;
    } else {
        node *curr_node = root;
        while (curr_node->next != NULL) {
            curr_node = curr_node->next;
        }
        curr_node->next = temp;
    }
}

// (3) Insert at a specific position or after a value
void InsertAtPosition(int val, int pos) {
    if (pos == 1) {
        InsertFirst(val);
        return;
    }
    node *temp = new node;
    temp->data = val;
    node *curr_node = root;
    for (int i = 1; i < pos - 1 && curr_node != NULL; i++) {
        curr_node = curr_node->next;
    }
    if (curr_node == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }
    temp->next = curr_node->next;
    curr_node->next = temp;
}

void InsertAfterValue(int val, int target) {
    node *curr_node = root;
    while (curr_node != NULL && curr_node->data != target) {
        curr_node = curr_node->next;
    }
    if (curr_node == NULL) {
        cout << "Value not found" << endl;
        return;
    }
    node *temp = new node;
    temp->data = val;
    temp->next = curr_node->next;
    curr_node->next = temp;
}

// (4) Delete the first node
void DeleteFirst() {
    if (root != NULL) {
        node *temp = root;
        root = root->next;
        delete temp;
    } else {
        cout << "List is empty" << endl;
    }
}

// (5) Delete the last node
void DeleteLast() {
    if (root == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    if (root->next == NULL) {
        delete root;
        root = NULL;
        return;
    }
    node *curr_node = root;
    node *prev_node = NULL;
    while (curr_node->next != NULL) {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }
    prev_node->next = NULL;
    delete curr_node;
}

// (6) Delete a node by position or by value
void DeleteAtPosition(int pos) {
    if (pos == 1) {
        DeleteFirst();
        return;
    }
    node *curr_node = root;
    node *prev_node = NULL;
    for (int i = 1; i < pos && curr_node != NULL; i++) {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }
    if (curr_node == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }
    prev_node->next = curr_node->next;
    delete curr_node;
}

void DeleteByValue(int val) {
    if (root == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    if (root->data == val) {
        DeleteFirst();
        return;
    }
    node *curr_node = root;
    node *prev_node = NULL;
    while (curr_node != NULL && curr_node->data != val) {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }
    if (curr_node == NULL) {
        cout << "Value not found" << endl;
        return;
    }
    prev_node->next = curr_node->next;
    delete curr_node;
}

// (7) Print the linked list
void Printing() {
    node *curr_node = root;
    while (curr_node != NULL) {
        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
    cout << endl;
}

// (8) Search for a value
bool Searching(int val) {
    node *curr_node = root;
    while (curr_node != NULL) {
        if (curr_node->data == val) return true;
        curr_node = curr_node->next;
    }
    return false;
}

// (9) Print the last node
void LastNode() {
    if (root == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    node *curr_node = root;
    while (curr_node->next != NULL) {
        curr_node = curr_node->next;
    }
    cout << curr_node->data << endl;
}

// (10) Print the second-to-last node
void PreviousOfLastNode() {
    if (root == NULL || root->next == NULL) {
        cout << "Not enough nodes" << endl;
        return;
    }
    node *curr_node = root;
    node *prev_node = NULL;
    while (curr_node->next != NULL) {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }
    cout << prev_node->data << endl;
}

// (11) Print the size of the linked list
int ListSize() {
    int count = 0;
    node *curr_node = root;
    while (curr_node != NULL) {
        count++;
        curr_node = curr_node->next;
    }
    return count;
}

// (12) Print the linked list in reverse order
void ReversePrint(node *curr_node) {
    if (curr_node != NULL) {
        ReversePrint(curr_node->next);
        cout << curr_node->data << " ";
    }
}

// (13) Main function
int main() {
    InsertFirst(10);
    InsertFirst(20);
    InsertLast(5);
    InsertAtPosition(15, 2);
    InsertAfterValue(25, 20);
    Printing(); // 20 25 15 10 5

    DeleteFirst();
    DeleteLast();
    DeleteAtPosition(2);
    DeleteByValue(10);
    Printing(); // 25

    cout << "Search 25: " << (Searching(25) ? "Found" : "Not Found") << endl; // Found
    cout << "Search 10: " << (Searching(10) ? "Found" : "Not Found") << endl; // Not Found

    InsertLast(30);
    InsertLast(40);
    cout << "Last node: ";
    LastNode(); // 40
    cout << "Second-to-last node: ";
    PreviousOfLastNode(); // 30

    cout << "List size: " << ListSize() << endl; // 3

    cout << "Reverse print: ";
    ReversePrint(root); // 40 30 25
    cout << endl;

    return 0;
}

