#include <vector>
#include <queue>
#include <iostream>




int main(){
    std::cout << "Hello World" << std::endl;

    std::vector<int> list;

    list.emplace_back(10);
    list.emplace_back(5);
    list.emplace_back(20);
    list.emplace_back(15);

    // You can throw a whole vector/etc into the heap with iterators like so:
    // Alternatively you can just push it into the heap. Thats preferred for the
    // maintenance of a k-sized heap.
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap(list.begin(), list.end());

    while(!minHeap.empty()){
        std::cout << minHeap.top() << std::endl;
        minHeap.pop();
    }

    return 0;
}
