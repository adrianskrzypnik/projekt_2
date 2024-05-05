#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <vector>
#include <utility>
using namespace std;

class PriorityQueue {
public:
    PriorityQueue();
    void insert(int val, int priority);
    pair<int, int> extract_max();
    pair<int, int> find_max();
    void modify_key(int val, int new_priority);
    int return_size();

private:
    vector<pair<int, int>> heap;
    int parent(int i);
    void heapify(int i);
    void upheap(int i);
    void downheap(int i);
};

#endif