"""
A test case for template inheritance python binding.
"""
import sys

sys.path.append("../build")

import template_inheritance

if __name__ == "__main__":
    rect = template_inheritance.Rectangle()
    rect.setWidth(5)
    rect.setHeight(7)
    area = rect.getArea()
    print('Total area: ' + str(rect.getArea()))
    print('Total paint cost: $' + str(rect.getCost(area)))
