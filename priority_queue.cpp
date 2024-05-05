#include "priority_queue.h"
using namespace std;

PriorityQueue::PriorityQueue() {}

void PriorityQueue::insert(int val, int priority) {
    heap.push_back(std::make_pair(val, priority));
    upheap(heap.size() - 1);
}

std::pair<int, int> PriorityQueue::extract_max() {
    pair<int, int> max = heap.front();
    heap.front() = heap.back();
    heap.pop_back();
    downheap(0);
    return max;
}

std::pair<int, int> PriorityQueue::find_max() {
    return heap.front();
}

int PriorityQueue::modify_key(int val, int new_priority) {
    for (size_t i = 0; i < heap.size(); ++i) {
        if (heap[i].first == val) {
            int old_priority = heap[i].second;
            heap[i].second = new_priority;
            if (new_priority > old_priority)
                upheap(i);
            else
                downheap(i);
            return 0;//zwraca 0 jak znajdzie i zamieni
        }
    }
    return -1; //zwraca -1 jak nie znajdzie elementu, potrzebne do testów
}

int PriorityQueue::return_size() {
    return heap.size();
}

//index rodzica
int PriorityQueue::parent(int i) {
    return (i - 1) / 2;
}

//przestawia priorytety miejscami, porownanie priorytetu wezla z jego dziecmi
void PriorityQueue::heapify(int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < heap.size() && heap[left].second > heap[largest].second)
        largest = left;

    if (right < heap.size() && heap[right].second > heap[largest].second)
        largest = right;

    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(largest);
    }
}

// przesuwa dodany element w gore kopca jesli jego priorytet jest wiekszy niz jego rodzica, dopoki nie osiagnie odpowiedniego poziomu
void PriorityQueue::upheap(int i) {
    while (i > 0 && heap[parent(i)].second < heap[i].second) {
        std::swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }
}

void PriorityQueue::downheap(int i) {
    heapify(i);
}

void PriorityQueue::clear() {
    heap.clear();
}