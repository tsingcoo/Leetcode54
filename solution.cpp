//
// Created by 王青龙 on 22/02/2017.
//

#include <iostream>
#include "solution.h"

std::vector<int> Solution::spiralOrder(std::vector<std::vector<int>> &matrix) {
    if (matrix.empty()) {
        return {};
    }
    auto m = matrix.size();
    auto n = matrix[0].size();
    std::vector<int> res(m * n, 0);

    int u = 0;
    int d = m - 1;
    int l = 0;
    int r = n - 1;

    int k = 0;

    while (true) {
        for (int j = l; j <= r; ++j) {
            res[k++] = matrix[u][j];
        }
        if (++u > d) {
            break;
        }
        for (int i = u; i <= d; ++i) {
            res[k++] = matrix[i][r];
        }
        if (--r < l) {
            break;
        }
        for (int j = r; j >= l; --j) {
            res[k++] = matrix[d][j];
        }
        if (--d < u) {
            break;
        }
        for (int i = d; i >= u; --i) {
            res[k++] = matrix[i][l];
        }
        if (++l > r) {
            break;
        }
    }
    return res;

}
