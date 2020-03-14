"""
A test case for static property python binding.
"""
import sys

sys.path.append("../build")

import static_property

if __name__ == "__main__":
    print("Initial box count: " + str(static_property.Box.getCount()))
    box1 = static_property.Box(3.3, 1.2, 1.5)
    box2 = static_property.Box(8.5, 6.0, 2.0)
    print("Final box count: " + str(static_property.Box.getCount()))
    