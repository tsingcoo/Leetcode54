#include <iostream>
#include "solution.h"
int main() {
    Solution s;
    std::vector<std::vector<int>> vv={{3},{2}};
    std::vector<int> res;
    res = s.spiralOrder(vv);
    for(auto i = res.begin(); i != res.end(); ++i){
        std::cout<<*i<<" ";
    }
    return 0;
}