"""
A test case for class template python binding.
"""
import sys

sys.path.append("../build")

import class_template

if __name__ == "__main__":
    # Test the intStack
    intStack = class_template.IntStack()
    intStack.push(3)
    intStack.push(1)
    intStack.push(4)
    print("The top element is: " + str(intStack.top()))
    print("The stack is empty: " + str(intStack.empty()))
    intStack.pop()
    print("The top element is: " + str(intStack.top()))
    intStack.pop()
    print("The top element is: " + str(intStack.top()))
    intStack.pop()
    print("The stack is empty: " + str(intStack.empty()))

    # Test floatStack
    floatStack = class_template.FloatStack()
    floatStack.push(3.1415926)
    print("The top element is: " + str(floatStack.top()))
    print("The stack is empty: " + str(floatStack.empty()))

