"""
A test case for function template python binding.
"""
import sys

sys.path.append("../build")

import func_template

if __name__ == "__main__":
    print(func_template.Max(4, 5))
    print(func_template.Max(4.5, 5.4))
