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
    void Eat()
    {
        cout << "Food" << endl;
    }
    void Sound()
    {
        cout << "Sound" << endl;
    }
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
    Elephant obj1("Indian", "Elephant", "Asia", 5000);
    obj1.Print();
    obj1.Eat();
    obj1.Sound();

    Parrot obj2("Macaw", "Parrot", "South America", 1.5);
    obj2.Print();
    obj2.Eat();
    obj2.Sound();

    Dog obj3("Golden retriever", "Dog", "Europe", 30);
    obj3.Print();
    obj3.Eat();
    obj3.Sound();

    Cat obj4("Bengal", "Cat", "North America", 4);
    obj4.Print();
    obj4.Eat();
    obj4.Sound();
}

