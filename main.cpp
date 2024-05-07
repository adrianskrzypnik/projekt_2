#include <iostream>
#include "Linkedlist.h"
#include "tests.h"
#include "priority_queue.h"

int main() {

    void LinkedList();
    void HeapStructure();
//    LinkedListPriorityQueue pq;
//
//    Test test(0);
//    long long x = test.linkedListReturnSize(pq, 30000);
//
//
//    std::cout<<"uśrednioy wynik "<<x/48 <<"\nwynik dla 48 pomiarów "<< x <<std::endl;



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
//
//
//    pq.modifyKey( 5,2);
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
//    int size = pq1.return_size();
//    std::cout << "Rozmiar: " << size << std::endl;
//
//    pq1.clear();
//
//    int size1 = pq1.return_size();
//    std::cout << "Rozmiar: " << size1 << std::endl;


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

    cout << "Choose a structure:" << endl;
    cout << "1) LinkedList" << endl;
    cout << "2) Heap" << endl;
    int choice;
    cin >> choice;
    cout << "\n\n";

    switch (choice) {
        case 1: {
            LinkedList();
            break;
        }
        case 2: {
            HeapStructure();
            break;
        }
    }

}


void LinkedList() {
    LinkedListPriorityQueue pq;
    int choice, many, priority, element;
    Test test1;

    do {
        cout << "1) A tab for testing." << endl;
        cout << "2) A tab for verifying proper functionality" << endl;
        cin >> choice;
        switch(choice) {
            case 1:
            {
                cout << "===================\n1) Add to LinkedList \n"
                     << "2) Remove from LinkedList \n"
                     << "3) Find in LinkedList \n"
                     << "4) Size of the LinkedList \n"
                     << "5) Change of a random element===================" << endl;
                cin >> choice;
                cout << "\n\n";

                switch (choice) {
                    case 1: {
                        cout << "How many elements: ";
                        cin >> many;
                        for(int i = 0; i < many; i++)
                        {
                            cout << "Enter element: ";
                            cin >> element;
                            cout << "Enter priority: ";
                            cin >> priority;
                            pq.insert(element,priority);
                        }

                        cout << "Elements were added" << endl;
                        break;
                    }

                    case 2: {
                        cout << "How many elements: ";
                        cin >> many;
                        for(int i = 0; i < many; i++)
                        {
                            cout << pq.extractMax() << endl;
                        }

                        cout << "Elements were removed" << endl;
                        break;
                    }

                    case 3: {
                        cout << "Element with the highest priority: " << pq.findMax();
                        break;
                    }

                    case 4: {
                        cout << "Size of the list: " << pq.returnSize() << endl;
                        break;
                    }

                    case 5: {
                        cout << "Enter element: ";
                        cin >> element;
                        cout << "Enter priority: ";
                        cin >> priority;
                        pq.modifyKey(element, priority);
                        cout << "Priority has been changed." << endl;
                        break;
                    }
                }
            }

            case 2:
            {
            cout << "How many element structure are you interested in?: ";
            cin >> many;
            cout << "===================\n1) Add to LinkedList \n"
                 << "2) Remove from LinkedList \n"
                 << "3) Find in LinkedList \n"
                 << "4) Size of the LinkedList \n"
                 << "5) Change of a random element\n"
                 << "6) Change the size of the structure\n===================" << endl;
            cin >> choice;
            cout << "\n\n";

            switch (choice) {
                case 1: {
                    auto time = test1.linkedListInsert(pq, many);
                    cout << "The duration of adding: " << many << " elements was: " << time << endl;
                    break;
                }

                case 2: {
                    auto time = test1.linkedListExtractMax(pq, many);
                    cout << "The duration of removing: " << many << " elements was: " << time << endl;
                    break;
                }
                case 3: {
                    auto time = test1.linkedListFindMax(pq, many);
                    cout << "The duration of finding the highest priority in the structure : " << many
                         << " elements was: "
                         << time << endl;
                    break;
                }

                case 4: {
                    auto time = test1.linkedListReturnSize(pq, many);
                    cout << "The duration of returning the size of the structure : " << many << " elements was: "
                         << time
                         << endl;
                    break;
                }

                case 5: {
                    auto time = test1.linkedListModifyKey(pq, many);
                    cout << "The change of a random element and priority in structure: " << many << " took: " << time
                         << endl;
                    break;
                }

            }
            }
        }
    } while (1);
}

void HeapStructure() {
    PriorityQueue pq1;
    int choice, many, element, priority;
    Test test1;
    do {
        cout << "Choose what interests you";
        cout << "1) A tab for testing." << endl;
        cout << "2) A tab for verifying proper functionality" << endl;
        cin >> choice;
        switch (choice) {
            case 1: {
                cout << "===================\n1) Add to LinkedList \n"
                     << "2) Remove from LinkedList \n"
                     << "3) Find in LinkedList \n"
                     << "4) Size of the LinkedList \n"
                     << "5) Change of a random element===================" << endl;
                cin >> choice;
                cout << "\n\n";

                switch (choice) {
                    case 1: {
                        cout << "How many elements: ";
                        cin >> many;
                        for (int i = 0; i < many; i++) {
                            cout << "Enter element: ";
                            cin >> element;
                            cout << "Enter priority: ";
                            cin >> priority;
                            pq1.insert(element, priority);
                        }

                        cout << "Elements were added" << endl;
                        break;
                    }

                    case 2: {
                        cout << "How many elements: ";
                        cin >> many;
                        for (int i = 0; i < many; i++) {
                            std::pair<int, int> extractedElement = pq1.extract_max();
                            cout << "Element with the highest priority: " << extractedElement.first << ", priority: " << extractedElement.second << endl;
                        }

                        cout << "Elements were removed" << endl;
                        break;
                    }

                    case 3: {
                        std::pair<int, int> maxElement = pq1.find_max();
                        cout << "Element with the highest priority: " << maxElement.first << ", priority: " << maxElement.second;
                        break;
                    }

                    case 4: {
                        cout << "Size of the list: " << pq1.return_size() << endl;
                        break;
                    }

                    case 5: {
                        cout << "Enter element: ";
                        cin >> element;
                        cout << "Enter priority: ";
                        cin >> priority;
                        pq1.modify_key(element, priority);
                        cout << "Priority has been changed." << endl;
                        break;
                    }
                }
            }
            case 2: {
                cout << "How many element structure are you interested in?: ";
                cin >> many;
                cout << "===================\n1) Add to the heap \n"
                     << "2) Remove from the heap \n"
                     << "3) Find in the heap \n"
                     << "4) Size of the heap \n"
                     << "5) Clear the heap\n"
                     << "6) Change the size of the structure\n===================" << endl;
                cin >> choice;
                cout << "\n\n";

                switch (choice) {
                    case 1: {
                        auto time = test1.heapInsert(pq1, many);
                        cout << "The duration of adding: " << many << " elements was: " << time << endl;
                        break;
                    }

                    case 2: {
                        auto time = test1.heapExtractMax(pq1, many);
                        cout << "The duration of removing: " << many << " elements was: " << time << endl;
                        break;
                    }

                    case 3: {
                        auto time = test1.heapFindMax(pq1, many);
                        cout << "The duration of finding the highest priority in the structure : " << many
                             << " elements was: "
                             << time << endl;
                        break;
                    }

                    case 4: {
                        auto time = test1.heapReturnSize(pq1, many);
                        cout << "The duration of returning the size of the structure: " << many << " elements was: "
                             << time
                             << endl;
                        break;
                    }

                    case 5: {
                        auto time = test1.heapModifyKey(pq1, many);
                        cout << "The change of a random element and priority in structure: " << many << " took: "
                             << time
                             << endl;
                        break;
                    }
                }
            }
        }
    }while (1);
}