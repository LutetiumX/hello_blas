# Hello BLAS

Simple Installation of OpenBLAS instruction and Test Code

To Install OpenBLAS

1. Define Your installation location.

    ```bash
    mkdir ~/openblas_installation
    cd ~/openblas_installation
    ```

2. Clone openblas repo

    ```bash
    git clone git://github.com/xianyi/OpenBLAS.git

    cd OpenBLAS
    ```

3. Build OpenBLAS

    ```bash
    make FC=gfortran
    make install PREFIX=~/openblas_installation/OpenBLAS/
    ```

4. Add configuration to your  .bashrc file

    ```bash
    vim .bashrc
    ```

    add the following lines to the end:

    ```bash
    export BLAS_HOME="~/openblas_installation/OpenBLAS"
    export BLAS_INC=${BLAS_HOME}/include/
    export BLAS_LIB=${BLAS_HOME}/lib/
    export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${BLAS_HOME}/lib/
    ```

5. Verify you have g++ installed with

    ```bash
    whereis g++
    ```

6. Run ```chmod +x build.sh && ./build.sh```
