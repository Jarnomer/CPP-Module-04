#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  const unsigned int count = 4;
  const Animal *animal[count];
  unsigned int i = 0;

  for (i = 0; i < count / 2; i++) {
    animal[i] = new Dog();
  }
  for (i = count / 2; i < count; i++) {
    animal[i] = new Cat();
  }
  for (unsigned int j = 0; j < count; j++) {
    delete animal[j];
  }

  std::cout << "\n";
  std::cout << "\n";

  const Animal *dog = new Dog();
  const Animal *cat = new Cat();

  delete dog;
  delete cat;
  return 0;
}
