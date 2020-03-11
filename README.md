# pybind11_test

This repository is to test pybind11 in the MLIR python binding project. Three libraries of MLIR are waiting for binding: Attribute, Type, and Operation.  This repository uses simple examples to search whether pybind11 can meet all the requirements of those three libraries.

### MLIR requirements

In this section, the requirements of MLIR libraries will be listed.

- Multiple inheritance

```C++
class Operation final
    : public IRMultiObjectWithUseList<OpOperand>,
      public llvm::ilist_node_with_parent<Operation, Block>,
      private llvm::TrailingObjects<Operation, detail::TrailingOpResult,
                                    BlockOperand, Region,
                                    detail::OperandStorage> {...}
```



### pybind11 capacities

| Requirements         | Capacity | Reference                                                    |
| -------------------- | -------- | ------------------------------------------------------------ |
| Function template    | Yes      | https://github.com/pybind/pybind11/issues/199                |
| Multiple inheritance | Yes      | https://pybind11.readthedocs.io/en/stable/advanced/classes.html#multiple-inheritance |

