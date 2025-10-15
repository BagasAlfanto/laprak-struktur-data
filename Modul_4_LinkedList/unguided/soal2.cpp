#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Fungsi untuk menambahkan node di akhir linked list
void append(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

// Fungsi untuk membalik linked list
void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* curr = head;
    while (curr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

// Fungsi untuk menampilkan linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, val;
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    cout << "Masukkan angka-angkanya:\n";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        append(head, val);
    }
    cout << "Linked list sebelum dibalik: ";
    printList(head);

    reverse(head);

    cout << "Linked list setelah dibalik: ";
    printList(head);

    // Bersihkan memori
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}