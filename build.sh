#!/bin/sh
g++ dscal.cpp -o dscal -I${BLAS_INC} -L${BLAS_LIB} -lopenblas
echo "Build Complete, running."
./dscal