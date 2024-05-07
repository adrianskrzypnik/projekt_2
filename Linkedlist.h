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

    //popraw aby zwracało caly element a nie tylko priotytet
    int findMax() {
        if (head == nullptr) throw std::runtime_error("Queue is empty");

        Node* temp = head;
        int maxPriority = temp->priority;
        while (temp != nullptr) {
            if (temp->priority > maxPriority) {
                maxPriority = temp->priority;
            }
            temp = temp->next;
        }

        return maxPriority;
    }



    int modifyKey(int e, int p) {
        Node* start = head;
        while (start != nullptr) {
            if (start->element == e) {
                start->priority = p;
                return 0;
            }
            start = start->next;
        }
        return -1;
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

    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};



#endif //PROJEKT_2_LINKEDLIST_H
