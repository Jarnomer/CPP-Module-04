#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
  std::cout << type << " constructor called\n";
  brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type) {
  std::cout << type << " constructor called\n";
  brain = new Brain();
}

Cat::~Cat(void) {
  std::cout << type << " deconstructor called\n";
  delete brain;
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << type << " copy constructor called\n";
  type = other.type;
  brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << type << " copy assignment operator called\n";
  if (this != &other) {
    this->type = other.type;
    delete this->brain;
    this->brain = new Brain(*other.brain);
  }
  return *this;
}

void Cat::makeSound(void) const { std::cout << type << " meows...\n"; }
