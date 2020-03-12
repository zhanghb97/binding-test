"""
A test case for multiple inheritance python binding.
"""
import sys

sys.path.append("../build")

import multi_inheritance

if __name__ == "__main__":
    rect = multi_inheritance.Rectangle()
    rect.setWidth(5)
    rect.setHeight(7)
    area = rect.getArea()
    print('Total area: ' + str(rect.getArea()))
    print('Total paint cost: $' + str(rect.getCost(area)))
