#include <iostream>
#include "Linkedlist.h"

int main() {
    LinkedListPriorityQueue pq;

    // Dodajemy elementy do kolejki priorytetowej
    pq.insert(3, 3);
    pq.insert(2, 1);
    pq.insert(15, 5);
    pq.insert(6, 2);
    pq.insert(4, 1);
    pq.insert(45, 3);

    std::cout << "Rozmiar kolejki: " << pq.returnSize() << std::endl;

    std::cout << "Element o największym priorytecie: " << pq.findMax() << std::endl;

    std::cout << "Usuwamy element o największym priorytecie: " << pq.extractMax() << std::endl;

    std::cout << "Rozmiar kolejki po usunięciu elementu: " << pq.returnSize() << std::endl;

    std::cout << "Element o największym priorytecie po usunięciu: " << pq.findMax() << std::endl;

    pq.modifyKey(2, 6);

    std::cout << "Element o największym priorytecie po modyfikacji klucza: " << pq.findMax() << std::endl;

    return 0;
}
