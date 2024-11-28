#include <iostream>
using namespace std;

class Animal
{
    string name;
    string sp;
    string continent;
    double kg;
public:
    Animal(){};
    Animal(string nm, string s, string cont, double k)
    {
        name = nm;
        sp = s;
        continent = cont;
        kg = k;
    }
    void Input()
    {
        cout << "Input name: ";
        cin >> name;
        cout << "Input species: ";
        cin >> sp;
        cout << "Input continent: ";
        cin >> continent;
        cout << "Input weight: ";
        cin >> kg;
    }
    void Print()
    {
        cout << name << "\t" << sp << "\t" << continent << "\t" << kg << endl;
    }
    virtual void Eat() = 0;
    virtual void Sound() = 0;
};

class Elephant :public Animal
{
public:
    Elephant() {};
    Elephant(string nm, string s, string cont, double k) :Animal(nm, s, cont, k) {};
    void Eat()
    {
        cout << "Grass" << endl;
    }
    void Sound()
    {
        cout << "Rumbling and trumpeting" << endl;
    }

};

class Parrot :public Animal
{
public:
    Parrot() {};
    Parrot(string nm, string s, string cont, double k) :Animal(nm, s, cont, k) {};
    void Eat()
    {
        cout << "Fruit, vegetables, nuts" << endl;
    }
    void Sound()
    {
        cout << "Whistles" << endl;
    }
};

class Dog :public Animal
{
public:
    Dog() {};
    Dog(string nm, string s, string cont, double k) :Animal(nm, s, cont, k) {};
    void Eat()
    {
        cout << "Meat and plant-based foods" << endl;
    }
    void Sound()
    {
        cout << "Bark!" << endl;
    }
};

class Cat :public Animal
{
public:
    Cat() {};
    Cat(string nm, string s, string cont, double k) :Animal(nm, s, cont, k) {};
    void Eat()
    {
        cout << "Fish, meat, and plant-based foods" << endl;
    }
    void Sound()
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    int choice;
    Animal* animal = nullptr;
    cout << "Choose an animal: 1 - Elephant, 2 - Parrot, 3 - Dog, 4 - Cat: ";
    cin >> choice;
    switch (choice)
    {
    case(1):
        animal = new Elephant("Indian", "Elephant", "Asia", 5000);
        break;
    case(2):
        animal = new Parrot("Macaw", "Parrot", "South America", 1.5);
        break;
    case(3):
        animal = new Dog("Golden retriever", "Dog", "Europe", 30);
        break;
    case(4):
        animal = new Cat("Bengal", "Cat", "North America", 4);
        break;
    } 
    animal->Print();
    animal->Eat();
    animal->Sound();
}

