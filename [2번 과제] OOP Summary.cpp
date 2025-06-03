#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	virtual void makeSound() 
	{
		cout << " " << endl;
	};
};

class Dog : public Animal
{
public:
	void makeSound()
	{
		cout << "Dog: Woof! Woof!" << endl;
	}

};

class Cat : public Animal
{
public:
	void makeSound()
	{
		cout << "Cat: Meow~" << endl;
	}
};


class Cow : public Animal
{
public:
	void makeSound()
	{
		cout << "Cow: Moo~~" << endl;
	}
};

int main()
{
	Animal* newAnimal;
	Dog newDog;
	Cat newCat;
	Cow newCow;

	Animal* Animals[3] = { &newDog, &newCat, &newCow };

	cout << "Animal sounds." << endl;

	for (int i = 0; i < 3; i++)
	{
		newAnimal = Animals[i];
		newAnimal->makeSound();
	}

	return 0;
}
