#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  const unsigned int count = 2;
  const Animal *animal[count];
  unsigned int i = 0;
  // Animal a;

  std::cout << "\nRAINING CATS AND DOGS\n\n";

  for (i = 0; i < count / 2; i++) {
    animal[i] = new Dog();
  }
  for (i = count / 2; i < count; i++) {
    animal[i] = new Cat();
  }
  for (unsigned int j = 0; j < count; j++) {
    delete animal[j];
  }

  std::cout << "\nWHAT ARE THEY THINKING?!\n\n";
  unsigned int index = 5;
  Dog *dog = new Dog();
  Cat *cat = new Cat();
  std::cout << "\n";

  dog->setIdea(index, "pizza");
  std::cout << dog->getType() << "'s idea at index: " << index
            << "   is: " << dog->getIdea(index) << "\n";
  std::cout << dog->getType()
            << "'s idea at index: 101 is: " << dog->getIdea(101);
  std::cout << dog->getType() << "'s idea at index: " << index - 1
            << "   is: " << dog->getIdea(index - 1) << "\n\n";

  index = 42;
  cat->setIdea(index, "beer");
  std::cout << cat->getType() << "'s idea at index: " << index
            << "  is: " << cat->getIdea(index) << "\n";
  std::cout << cat->getType()
            << "'s idea at index: -1  is: " << cat->getIdea(-1);
  std::cout << cat->getType() << "'s idea at index: " << index + 1
            << "  is: " << cat->getIdea(index - 1) << "\n";

  std::cout << "\nTHEY ARE COPYING THEMSELVES?!\n\n";

  Dog *dogCopy1 = new Dog(*dog);
  Dog *dogCopy2 = new Dog();
  *dogCopy2 = *dog;

  Cat *catCopy1 = new Cat(*cat);
  Cat *catCopy2 = new Cat();
  *catCopy2 = *cat;

  std::cout << "\nFINALY THEY ARE GETTING DELETED!\n\n";
  delete dog;
  delete dogCopy1;
  delete dogCopy2;
  delete cat;
  delete catCopy1;
  delete catCopy2;
  return 0;
}
