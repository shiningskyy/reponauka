#include <iostream>
#include <vector>
#include <random>

int main(){
    srand(time(NULL));
    std::vector<std::vector<int>> wektor;
    for(int i = 0; i < 10; i++){
        std::vector<int> temp;
        temp.insert(temp.begin(), {std::rand()%1000, std::rand()%1000});
        wektor.push_back(temp);
    }

    for(auto &rows: wektor){
        for(auto &cols: rows){
            std::cout<<cols<<' ';
        }
        std::cout<<std::endl;
    }
}
