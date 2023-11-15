#include "pch.h"

#include "test.h"

int main() {

    Eigen::MatrixXi m(2, 2);
    m << 1, 2, 3, 4;
    std::cout << m << std::endl;

    return 0;
}