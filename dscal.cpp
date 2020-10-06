#include <iostream>
#include <cblas.h>

int main(int argc, char **argv) {
    double x[] = {1.0, 2.0, 3.0};
    double coeff = 4.232;

    int one = 1;
    int n = 3;
    cblas_dscal(n, coeff, x, one);
    for (int i = 0; i < n; i++) {
        std::cout<<" "<<x[i];
    }
    std::cout<<"\n ";
    return 0;
}