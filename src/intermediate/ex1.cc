#include <vector>
#include <queue>
#include <iostream>

/*
    min heap using pairs and a custom comparator function
*/


int main(){
    
    auto pairCompare = [](const std::pair<int,std::string> &p1, const std::pair<int,std::string> &p2){
        // Use > for minHeap, and use < for maxHeap.
        return p1.first > p2.first;
    };


    std::priority_queue<std::pair<int,std::string> , std::vector<std::pair<int,std::string>> ,
    decltype(pairCompare)> minHeap(pairCompare);

    minHeap.emplace(std::pair<int,std::string>(3, "John"));
    minHeap.emplace(std::pair<int,std::string>(1, "James"));
    minHeap.emplace(std::pair<int,std::string>(2, "Judas"));
    minHeap.emplace(std::pair<int,std::string>(0, "Peter"));

    while(!minHeap.empty()){
        std::cout << minHeap.top().first << ": ";
        std::cout << minHeap.top().second << std::endl;
        minHeap.pop();
    }

    return 0;
}
