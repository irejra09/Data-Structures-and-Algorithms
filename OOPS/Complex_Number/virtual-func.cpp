//Here is an implementation of runtime polymorphism using the virtual function in C++
#include<iostream>
using namespace std;

class Animal
{
    public:
        virtual void makeSound()
        {
            cout<<"Animal"<<endl;
        }
};

class Dog: public Animal
{
    public:
        void makeSound()
        {
            cout<<"Dog barks!"<<endl;
        }
};

class Cat: public Animal
{
    public:
        void makeSound()
        {
            cout<<"Cat meows!"<<endl;
        }
};

int main()
{
    Animal* animalPtr;
    Dog d;
    Cat c;

    animalPtr = &d;
    animalPtr -> makeSound();

    animalPtr = &c;
    animalPtr -> makeSound();
    return 0;
}