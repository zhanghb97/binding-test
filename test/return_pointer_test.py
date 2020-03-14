"""
A test case for return pointer python binding.
"""
import sys

sys.path.append("../build")

import return_pointer

if __name__ == "__main__":
    print("Initial box count: " + str(return_pointer.Box.getCount()))
    box = return_pointer.Box()
    box1 = box.create(1, 2, 3)
    print("Volume: " + str(box1.Volume()))
    print("Final box count: " + str(return_pointer.Box.getCount()))
    