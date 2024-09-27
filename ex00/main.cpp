#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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

  std::cout << "\n";
  const WrongAnimal *wmeta = new WrongAnimal();
  const WrongAnimal *wcat = new WrongCat();
  std::cout << "\n";
  std::cout << wcat->getType() << std::endl;
  std::cout << "\n";
  wcat->makeSound();
  wmeta->makeSound();
  std::cout << "\n";
  delete wmeta;
  delete wcat;
  return 0;
}
