#include <iostream>
#include "Linkedlist.h"
#include "tests.h"
#include "priority_queue.h"

void LinkedListStructure() {
    LinkedListPriorityQueue pq;
    int choice, variable, seed;
    long long duration = 0;

    do {
        cout << "===================\n1) Insert \n"
             << "2) ExtractMax\n"
             << "3) Find Max\n"
             << "4) Modify Key \n"
             << "5) Return Size \n==================="<< endl;
        cin >> choice;
        cout << "\n\n";

        switch (choice) {
            case 1: {
                Test test(0);
                test.allCasesLinkedListInsert(pq);

                cout << "\n\n";
                break;
            }

            case 2: {
                Test test(0);
                test.allCasesLinkedListExcractMax(pq);

                cout << "\n\n";
                break;
            }

            case 3: {
                Test test(0);
                test.allCasesLinkedListFindMax(pq);

                cout << "\n\n";
                break;
            }

            case 4: {
                Test test(0);
                test.allCasesLinkedListModifyKey(pq);
                cout << "\n\n";
                break;
            }

            case 5: {
                Test test(0);
                test.allCasesLinkedListReturnSize(pq);
                cout << "\n\n";
                break;
            }

            default:
                return;
        }
    } while (1);
}

void HeapStructure() {
    PriorityQueue pq;
    int choice;
    long long duration = 0;

    do {
        cout << "===================\n1) Insert \n"
             << "2) ExtractMax\n"
             << "3) Find Max\n"
             << "4) Modify Key \n"
             << "5) Return Size \n==================="<< endl;
        cin >> choice;
        cout << "\n\n";

        switch (choice) {
            case 1: {
                Test test(0);
                test.allCasesHeapInsert(pq);

                cout << "\n\n";
                break;
            }

            case 2: {
                Test test(0);
                test.allCasesHeapExcractMax(pq);

                cout << "\n\n";
                break;
            }

            case 3: {
                Test test(0);
                test.allCasesHeapFindMax(pq);

                cout << "\n\n";
                break;
            }

            case 4: {
                Test test(0);
                test.allCasesHeapModifyKey(pq);
                cout << "\n\n";
                break;
            }

            case 5: {
                Test test(0);
                test.allCasesHeapReturnSize(pq);
                cout << "\n\n";
                break;
            }

            default:
                return;
        }
    } while (1);
}


int main() {
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

    void LinkedListStructure() {
        LinkedListPriorityQueue pq;
        int choice, variable, seed;
        long long duration = 0;

        do {
            cout << "===================\n1) Insert \n"
                 << "2) ExtractMax\n"
                 << "3) Find Max\n"
                 << "4) Modify Key \n"
                 << "5) Return Size \n==================="<< endl;
            cin >> choice;
            cout << "\n\n";

            switch (choice) {
                case 1: {
                    Test test(0);
                    test.allCases
                    break;
                }

                case 2: {
                    cout << "Choose from where you want to remove elements: \n==================="
                         << "1) From the front \n"
                         << "2) From the back \n"
                         << "3) From random positions \n===================" << endl;
                    cin >> choice;
                    cout << "\n\n";
                    switch (choice) {
                        case 1: {

                            Test test(0);
                            test.allCasesArrayListRemoveFromFront(arrayList1);

                            cout << "\n\n";
                            break;
                        }
                        case 2: {

                            Test test(0);
                            test.allCasesArrayListRemoveFromBack(arrayList1);

                            cout << "\n\n";
                            break;
                        }
                        case 3: {

                            Test test(0);
                            test.allCasesArrayListRemoveFromRandom(arrayList1);

                            cout << "\n\n";
                            break;
                        }
                        default: {
                            cout << "ERROR" << endl;
                            cout << "\n\n";
                            break;
                        }
                    }
                    break;
                }

                case 3: {
                    Test test(0);
                    test.allCasesArrayListFindRandomNumber(arrayList1);

                    cout << "\n\n";
                    break;
                }

                case 4: {
                    for (int i = 0; i < arrayList1.get_number_of_elements_inside_list(); i++)
                        cout << arrayList1.get_element(i) << " ";
                    cout << "\n\n";
                    break;
                }

                case 5: {
                    cout << "Max capacity of the array: " << arrayList1.get_length() << endl;
                    cout << "\n\n";
                    break;
                }

                case 6: {
                    cout << "Current number of elements in the array: " << arrayList1.get_number_of_elements_inside_list()
                         << endl;
                    cout << "\n\n";
                    break;
                }


                case 7: {
                    arrayList1.clear();
                    cout << "Array cleared.\n\n";
                    break;
                }

                default:
                    return;
            }
        } while (1);
    }

    void Singly_Linked_list() {
        SinglyLinkedList list;
        int choice, variable, seed;
        long long duration = 0;

        do {
            cout << "===================\n1) Add to array \n"
                 << "2) Remove from array \n"
                 << "3) Find random number in array \n"
                 << "4) Display array \n"
                 << "5) Current of the array \n"
                 << "6) Clear array\n===================" << endl;
            cin >> choice;
            cout << "\n\n";

            switch (choice) {
                case 1: {
                    cout << "===================\n1) Adding from the front \n"
                         << "2) Adding from the back \n"
                         << "3) Adding at random positions \n"<<endl;

                    cin >> choice;
                    cout << "\n\n";

                    switch (choice) {
                        case 1: {
                            Test test(0);
                            test.allCasesSinglyLinkedListAddToFront(list);
                            break;
                        }
                        case 2: {
                            Test test(0);
                            test.allCasesSinglyLinkedListAddToBack(list);
                            break;
                        }
                        case 3: {
                            Test test(0);
                            test.allCasesSinglyLinkedListAddToRandom(list);
                            break;
                        }

                    }
                    break;
                }

                case 2: {
                    cout << "Choose from where you want to remove elements: \n===================\n"
                         << "1) From the front \n"
                         << "2) From the back \n"
                         << "3) From random positions \n===================" << endl;
                    cin >> choice;
                    cout << "\n\n";
                    switch (choice) {
                        case 1: {
                            Test test(0);
                            test.allCasesSinglyLinkedListRemoveFromFront(list);
                            break;
                        }
                        case 2: {

                            Test test(0);
                            test.allCasesSinglyLinkedListRemoveFromBack(list);
                            break;
                        }
                        case 3: {

                            Test test(0);
                            test.allCasesSinglyLinkedListRemoveFromRandom(list);
                            break;
                        }
                        default: {
                            cout << "ERROR" << endl;
                            cout << "\n\n";
                            break;
                        }
                    }
                    break;
                }

                case 3: {
                    Test test(0);
                    test.allCasesSinglyLinkedListFindRandomNumber(list);

                    cout << "\n\n";
                    break;
                }

                case 4: {

                    list.printAll();

                    cout << "\n\n";
                    break;
                }

                case 5: {
                    cout << "Current size of the array: " << list.returnSize() << endl;
                    cout << "\n\n";
                    break;
                }


                case 6: {
                    list.clear();
                    cout << "Array cleared.\n\n";
                    break;
                }

                default:
                    return;
            }
        } while (1);
    }

}
