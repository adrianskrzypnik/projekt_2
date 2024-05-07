#ifndef PROJEKT_2_TESTS_H
#define PROJEKT_2_TESTS_H

#include <cstdlib>
#include <chrono>
#include "Linkedlist.h"
#include "priority_queue.h"

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
            for (int j = 0; j < 8; ++j) {

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
    long long linkedListExtractMax(LinkedListPriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 8; ++j) {
                //zapełnianie kolejki
                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }

                auto start = std::chrono::high_resolution_clock::now();

                list.extractMax();

                auto end = std::chrono::high_resolution_clock::now();
                auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);



                sum_duration += duration.count();

                list.clear();
            }
        }
        return sum_duration;
    }

    //znaleznie elementu z najwiekszym priorytetem
    long long linkedListFindMax(LinkedListPriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 8; ++j) {
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



    long long linkedListModifyKey(LinkedListPriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane
        //badania dla 8 seedow
        for (int i = 0; i < 8; ++i) {
            Test test(i);
            //dla kazdego seeda po 8 badan
            for (int j = 0; j < 8; ++j) {

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
            for (int j = 0; j < 8; ++j) {
                //zapełnianie kolejki
                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }

                auto start = std::chrono::high_resolution_clock::now();

                list.returnSize();

                auto end = std::chrono::high_resolution_clock::now();
                auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);


                sum_duration += duration.count();

                list.clear();
            }
        }
        return sum_duration;
    }


    //KOPIEC

    long long heapInsert(PriorityQueue& list, int numberOfElements) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 8; ++j) {

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
    long long heapExtractMax(PriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 8; ++j) {
                //zapełnianie kolejki
                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }

                auto start = std::chrono::high_resolution_clock::now();

                list.extract_max();

                auto end = std::chrono::high_resolution_clock::now();
                auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

                sum_duration += duration.count();

                list.clear();
            }
        }
        return sum_duration;
    }

    //znaleznie elementu z najwiekszym priorytetem
    long long heapFindMax(PriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 8; ++j) {
                //zapełnianie kolejki
                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }

                auto start = std::chrono::high_resolution_clock::now();

                list.find_max();

                auto end = std::chrono::high_resolution_clock::now();
                auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);


                sum_duration += duration.count();

                list.clear();
            }
        }
        return sum_duration;
    }



    long long heapModifyKey(PriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane
        //badania dla 8 seedow
        for (int i = 0; i < 8; ++i) {
            Test test(i);
            //dla kazdego seeda po 8 badan
            for (int j = 0; j < 8; ++j) {

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

                    int result = list.modify_key(randomNumber, randomPrio);

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
    long long heapReturnSize(PriorityQueue& list, int numberOfElements) {
        long long sum_duration = 0;//pomiary są sumowane

        for (int i = 0; i < 8; ++i) {
            Test test(i);
            for (int j = 0; j < 8; ++j) {
                //zapełnianie kolejki
                for (int i = 0; i < numberOfElements; ++i) {
                    int randomNumber = generateRandomNumber();
                    int randomPrio = generateRandomPrio();//losowy priotytet w zakresie 1-100
                    list.insert(randomNumber, randomPrio); // dodaj na początek listy
                }

                auto start = std::chrono::high_resolution_clock::now();

                int size = list.return_size();

                auto end = std::chrono::high_resolution_clock::now();
                auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);


                sum_duration += duration.count();

                list.clear();
            }
        }
        return sum_duration;
    }


    //funkcje do badania wszystkich przypadków

    void allCasesLinkedListInsert(LinkedListPriorityQueue& list){
        std::cout<<"linkedListInsert"<<std::endl;

        long long res10k = linkedListInsert(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = linkedListInsert(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = linkedListInsert(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = linkedListInsert(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = linkedListInsert(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = linkedListInsert(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesLinkedListExcractMax(LinkedListPriorityQueue& list){
        std::cout<<"linkedListExcractMax("<<std::endl;

        long long res10k = linkedListExtractMax(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = linkedListExtractMax(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = linkedListExtractMax(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = linkedListExtractMax(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = linkedListExtractMax(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = linkedListExtractMax(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesLinkedListFindMax(LinkedListPriorityQueue& list){
        std::cout<<"linkedListFindMax"<<std::endl;

        long long res10k = linkedListFindMax(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = linkedListFindMax(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = linkedListFindMax(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = linkedListFindMax(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = linkedListFindMax(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = linkedListFindMax(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesLinkedListModifyKey(LinkedListPriorityQueue& list){
        std::cout<<"linkedListModifyKey"<<std::endl;

        long long res10k = linkedListModifyKey(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = linkedListModifyKey(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = linkedListModifyKey(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = linkedListModifyKey(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = linkedListModifyKey(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = linkedListModifyKey(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesLinkedListReturnSize(LinkedListPriorityQueue& list){
        std::cout<<"linkedListReturnSize"<<std::endl;

        long long res10k = linkedListReturnSize(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = linkedListReturnSize(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = linkedListReturnSize(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = linkedListReturnSize(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = linkedListReturnSize(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = linkedListReturnSize(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesHeapInsert(PriorityQueue& list){
        std::cout<<"heapInsert"<<std::endl;

        long long res10k = heapInsert(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = heapInsert(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = heapInsert(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = heapInsert(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = heapInsert(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = heapInsert(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesHeapExcractMax(PriorityQueue& list){
        std::cout<<"heapExcractMax"<<std::endl;

        long long res10k = heapExtractMax(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = heapExtractMax(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = heapExtractMax(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = heapExtractMax(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = heapExtractMax(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = heapExtractMax(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesHeapFindMax(PriorityQueue& list){
        std::cout<<"heapFindMax"<<std::endl;

        long long res10k = heapFindMax(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = heapFindMax(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = heapFindMax(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = heapFindMax(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = heapFindMax(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = heapFindMax(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesHeapModifyKey(PriorityQueue& list){
        std::cout<<"heapModifyKey"<<std::endl;

        long long res10k = heapModifyKey(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = heapModifyKey(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = heapModifyKey(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = heapModifyKey(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = heapModifyKey(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = heapModifyKey(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }

    void allCasesHeapReturnSize(PriorityQueue& list){
        std::cout<<"heapReturnSize"<<std::endl;

        long long res10k = heapReturnSize(list, 10000);
        std::cout<< "Wynik dla 10k " << res10k/64 <<std::endl;


        long long res20k = heapReturnSize(list, 20000);
        std::cout<< "Wynik dla 20k " << res20k/64 <<std::endl;

        long long res30k = heapReturnSize(list, 30000);
        std::cout<< "Wynik dla 30k " << res30k/64 <<std::endl;

        long long res40k = heapReturnSize(list, 40000);
        std::cout<< "Wynik dla 40k " << res40k/64 <<std::endl;

        long long res50k = heapReturnSize(list, 50000);
        std::cout<< "Wynik dla 50k " << res50k/64 <<std::endl;

        long long res60k = heapReturnSize(list, 60000);
        std::cout<< "Wynik dla 60k " << res60k/64 <<std::endl;
    }


};


#endif //PROJEKT_2_TESTS_H
