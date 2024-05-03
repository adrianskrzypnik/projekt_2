#ifndef PROJEKT_2_LINKEDLIST_H
#define PROJEKT_2_LINKEDLIST_H

#include <iostream>

struct Node {
    int element;
    int priority;
    Node* next;
};

class LinkedListPriorityQueue {
    Node* head;

public:
    LinkedListPriorityQueue() : head(nullptr) {}

    void insert(int e, int p) {
        Node* temp = new Node;
        temp->element = e;
        temp->priority = p;

        if (head == nullptr || p > head->priority) {
            temp->next = head;
            head = temp;
        } else {
            Node* start = head;
            while (start->next != nullptr && start->next->priority > p) {
                start = start->next;
            }
            temp->next = start->next;
            start->next = temp;
        }
    }

    int extractMax() {
        if (head == nullptr) throw std::runtime_error("Queue is empty");

        Node* temp = head;
        head = head->next;
        int maxElement = temp->element;
        delete temp;

        return maxElement;
    }

    int findMax() {
        if (head == nullptr) throw std::runtime_error("Queue is empty");
        return head->element;
    }

    void modifyKey(int e, int p) {
        Node* start = head;
        while (start != nullptr) {
            if (start->element == e) {
                start->priority = p;
                return;
            }
            start = start->next;
        }
        throw std::runtime_error("Element not found");
    }

    int returnSize() {
        int size = 0;
        Node* start = head;
        while (start != nullptr) {
            size++;
            start = start->next;
        }
        return size;
    }
};



#endif //PROJEKT_2_LINKEDLIST_H
