# cpp-refactor

- make this tool
    ```
    git clone https://github.com/llvm/llvm-project.git

    cp -r mlir-member-cast-rewriter llvm-project/clang-tools-extra/

    echo 'add_subdirectory(mlir-member-cast-rewriter)' >> llvm-project/clang-tools-extra/CMakeLists.txt

    cd llvm-project && mkdir build && cd build

    # cmake config clamg-tool
    cmake -G Ninja ../llvm -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra" -DLLVM_BUILD_TESTS=ON -DCMAKE_BUILD_TYPE=Release

    cd ..
    cmake --build build

    
    ```
- try refactor the test file
    ```
    llvm-project/build/bin/mlir-member-cast-rewriter --target-type=Type /test/rewrite-mlir-cast.cpp
    ```
- refactor mlir::Attribute or mlir::AffineExpr
    ```
    llvm-project/build/bin/mlir-member-cast-rewriter --target-type=AffineExpr -p build llvm-project/mlir/lib/IR/AffineMap.cpp
    ```