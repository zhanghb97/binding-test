"""
A test case for enum type python binding.
"""
import sys

sys.path.append("../build")

import enum_type

if __name__ == "__main__":
    pet = enum_type.Pet('Lucy', enum_type.Pet.Cat)
    print("Pet is a: " + str(pet.type))

