#ifndef PROJEKT_2_TESTS_H
#define PROJEKT_2_TESTS_H

#include <cstdlib>
#include <chrono>
#include "Linkedlist.h"


class Test
{
public:
    Test(int seed = 0) {
        srand(seed); // ustawia ziarno
    }

    int32_t generateRandomNumber() {
        return rand(); // generuje losową liczbę
    }

    int32_t generateRandomPrio() {
        return rand() % 100 + 1; // generuje losową liczbę w zakresie 1-100
    }

    //LINKEDLIST
    //dodawanie
    long long linkedListInsert(LinkedListPriorityQueue& list, int numberOfElements) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < 8; ++i) {
            Test test(i);
//            for (int j = 0; j < 6; ++j) {

                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();
                    std::cout<<"new "<< randomNumber <<" "<< randomPrio <<std::endl;
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }
                list.clear();
//            }
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        return duration.count();
    }
};



#endif //PROJEKT_2_TESTS_H
