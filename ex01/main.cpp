#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  const Animal *meta = new Animal();
  const Animal *dog = new Dog();
  const Animal *cat = new Cat();
  std::cout << "\n";
  std::cout << dog->getType() << std::endl;
  std::cout << cat->getType() << std::endl;
  std::cout << "\n";
  cat->makeSound();
  dog->makeSound();
  meta->makeSound();
  std::cout << "\n";
  delete meta;
  delete dog;
  delete cat;
  return 0;
}
