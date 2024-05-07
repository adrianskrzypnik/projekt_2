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


}
