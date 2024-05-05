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

    //DO POPRAWY

    //"Przyjąć, że zakres priorytetów
    //jest kilkukrotnie większy niż wielkość struktury. "
    int32_t generateRandomPrio() {
        return rand() % 100 + 1; // generuje losową liczbę w zakresie 1-100
    }


    //LINKEDLIST
    //dodawanie elementow z losowym priorytetem
    long long linkedListInsert(LinkedListPriorityQueue& list, int numberOfElements) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 6; ++j) {

                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }
                list.clear();
            }
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        return duration.count();
    }

    //znaleznie elementu z najwiekszym priorytetem
    long long linkedListFindMax(LinkedListPriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 6; ++j) {
                //zapełnianie kolejki
                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }

                auto start = std::chrono::high_resolution_clock::now();

                int found_max = list.findMax();

                auto end = std::chrono::high_resolution_clock::now();
                auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);


                std::cout<<"found: "<<found_max <<std::endl;

                sum_duration += duration.count();

                list.clear();
            }
        }
        return sum_duration;
    }


    //test modify-key
//    1. zapelnienie kolejki
//    2. losowanie elementu ktoremu zmodyfikujemy prio
//    3. sprawdzenie czy ten element jest w kolejce
//    4a. jak jest start pomiaru               4b. nie ma, lo
//    5. modify-key
//    6. koniec pomiaru
//      7. dodanie do sumy pomiarów, ilosc pomiarów++

    long long linkedListModifyKey(LinkedListPriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane
        //badania dla 8 seedow
        for (int i = 0; i < 8; ++i) {
            Test test(i);
            //dla kazdego seeda po 6 badan
            for (int j = 0; j < 6; ++j) {

                list.clear();
                //zapełnianie tablicy
                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }

                int g = 0;
                //wyszukiwanie losowej liczby, wykonywane do zalezienia
                while (g < 1) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();

                    auto start = std::chrono::high_resolution_clock::now();

                    int result = list.modifyKey(randomNumber, randomPrio);

                    auto end = std::chrono::high_resolution_clock::now();
                    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

                    //jeśli znaleziono, pomiar dodany jest dodawny do sum_duration,
                    //petla while się przerywa i przystępuje do kolejnego pomiaru
                    if (result != -1){
                        sum_duration += duration.count();
                        g++;
                    }
                }
            }
        }

        return sum_duration;
    }

    //zwrócenie rozmiaru
    long long linkedListReturnSize(LinkedListPriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 6; ++j) {
                //zapełnianie kolejki
                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }

                auto start = std::chrono::high_resolution_clock::now();

                int size = list.returnSize();

                auto end = std::chrono::high_resolution_clock::now();
                auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);


//                std::cout<<"size of queue: "<<found_max <<std::endl;

                sum_duration += duration.count();

                list.clear();
            }
        }
        return sum_duration;
    }

};



#endif //PROJEKT_2_TESTS_H
