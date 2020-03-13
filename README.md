# pybind11_test

This repository is to test pybind11 in the MLIR python binding project. Three libraries of MLIR are waiting for binding: Attribute, Type, and Operation.  This repository uses simple examples to search whether pybind11 can meet all the requirements of those three libraries.

### MLIR requirements

In this section, the requirements of MLIR libraries will be listed.

- Multiple inheritance
- Class template
- Template inheritance

```C++
// Operation.h
class Operation final
    : public IRMultiObjectWithUseList<OpOperand>,
      public llvm::ilist_node_with_parent<Operation, Block>,
      private llvm::TrailingObjects<Operation, detail::TrailingOpResult,
                                    BlockOperand, Region,
                                    detail::OperandStorage> {...}
```

- Function template

```C++
// Operation.h
template <typename OpTy> OpTy getParentOfType() {
  auto *op = this;
  while ((op = op->getParentOp()))
    if (auto parentOp = dyn_cast<OpTy>(op))
      return parentOp;
  return OpTy();
}
```



### pybind11 capacities

| Requirements         | Capacity | Reference                                                    |
| -------------------- | -------- | ------------------------------------------------------------ |
| Function template    | Yes      | https://github.com/pybind/pybind11/issues/199                |
| Class template       | Yes      | https://github.com/pybind/pybind11/issues/199                |
| Multiple inheritance | Yes      | https://pybind11.readthedocs.io/en/stable/advanced/classes.html#multiple-inheritance |
| Template inheritance | Yes      | Refit from multiple inheritance                              |



### Test cases

Test cases are available in `pybind11_test/test/`directory. Each test case is for testing the corresponding  shared library. Before running those test cases on your computer, please make sure pybind11 is installed successfully, and you should compile the python binding programs in `pybind11_test/src/`directory.

```
$ cd pybind11_test
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build .
```

After running the commands above, all the shared libraries will be ready for testing. Now you can go to `pybind11_test/test/` directory and pick the test case, then just test it!