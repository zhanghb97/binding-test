/*
 * EnumType.h
 * This library is to illustrate a enum type case.
 */

struct Pet {
  // Enum type: Kind
  enum Kind {
    Dog = 0,
    Cat
  };

  // Constructor
  Pet(const std::string &name, Kind type) : name(name), type(type) { }

  // Class members
  std::string name;
  Kind type;
};
