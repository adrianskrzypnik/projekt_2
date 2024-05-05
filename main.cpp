#include <iostream>
#include "Linkedlist.h"
#include "tests.h"
#include "priority_queue.h"
int main() {
    LinkedListPriorityQueue pq;

    Test test(0);
    int x = test.linkedListInsert(pq, 10);


    std::cout<<"new "<<x <<std::endl;



//    LinkedListPriorityQueue pq;
//
//    // Dodajemy elementy do kolejki priorytetowej
//    pq.insert(3, 3);
//    pq.insert(2, 1);
//    pq.insert(15, 5);
//    pq.insert(6, 2);
//    pq.insert(4, 1);
//    pq.insert(45, 3);
//
//    std::cout << "Rozmiar kolejki: " << pq.returnSize() << std::endl;
//
//    std::cout << "Element o największym priorytecie: " << pq.findMax() << std::endl;
//
//    std::cout << "Usuwamy element o największym priorytecie: " << pq.extractMax() << std::endl;
//
//    std::cout << "Rozmiar kolejki po usunięciu elementu: " << pq.returnSize() << std::endl;
//
//    std::cout << "Element o największym priorytecie po usunięciu: " << pq.findMax() << std::endl;
//
//    pq.modifyKey(2, 6);
//
//    std::cout << "Element o największym priorytecie po modyfikacji klucza: " << pq.findMax() << std::endl;
//
//    return 0;


//###KOPIEC

//    PriorityQueue pq1;
//
//    // dodawanie elementow do wektora (wartosc, priorytet)
//    pq1.insert(3, 2);
//    pq1.insert(8, 1);
//    pq1.insert(1, 3);
//    pq1.insert(9, 2);
//    pq1.insert(5, 3);
//
//    // usuwanie i zwracanie elementu o największym priorytecie
//    std::pair<int, int> maxElement = pq1.extract_max();
//    std::cout << "Usuwamy element: " << maxElement.first << " priorytet: " << maxElement.second << endl;
//
//    // znajdz najwyzszy priorytet
//    std::pair<int, int> topElement = pq1.find_max();
//    std::cout << "Element: " << topElement.first << " priorytet: " << topElement.second << std::endl;
//
//    // modyfikuj priorytet wybranego elementu
//    pq1.modify_key(9, 4);
//
//    // zwroc rozmiar
//    int size = pq1.return_size();
//    std::cout << "Rozmiar: " << size << std::endl;
//
//    return 0;
}
