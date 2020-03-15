"""
A test case for friend class python binding.
"""
import sys

sys.path.append("../build")

import friend_class

if __name__ == "__main__":
    r = friend_class.Rectangle()
    s = friend_class.Square()
    s.Display(r)
