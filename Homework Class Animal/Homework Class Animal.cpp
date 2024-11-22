#include <iostream>
using namespace std;

class Animal
{
protected:
    string name; 
    string sp;  
    string continent;
    double kg;

public:
    Animal() {}
    Animal(string nm, string s, string cont, double k)
    {
        name = nm;
        sp = s;
        continent = cont;
        kg = k;
    }
    void Input()
    {
        cout << "������� �������� ���������: ";
        cin >> name;
        cout << "������� ���: ";
        cin >> sp;
        cout << "������� ���������: ";
        cin >> continent;
        cout << "������� ��� �: ";
        cin >> kg;
    }
    void Print()
    {
        cout << name << "\t" << sp << "\t" << continent << "\t" << kg << endl;
    }
    virtual void Eat()
    {
        cout << "���� ��� �� ������� ��� ���!\n";
    }
    virtual void Sound()
    {
        cout << "���� ��� �� ������� ����� ����� ������!\n";
    }
};

class Elephant : public Animal
{
public:
    Elephant() {}
    Elephant(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() 
    {
        cout << "����� ���������� ��������\n";
    }
    void Sound()
    {
        cout << "����� ����� � ��������, � ��������, ����� ����� ������!\n";
    }
};

class Dog : public Animal
{
public:
    Dog() {}
    Dog(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() 
    {
        cout << "������ ������ ��������\n";
    }
    void Sound() 
    {
        cout << "������ ������ ���� ���-���!\n";
    }
};

class Cat : public Animal
{
public:
    Cat() {}
    Cat(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() 
    {
        cout << "���� ������ ��������\n";
    }
    void Sound() 
    {
        cout << "���� ������ ���� ���-���!\n";
    }
};

class Parrot : public Animal
{
public:
    Parrot() {}
    Parrot(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() 
    {
        cout << "������� ���� ������, ������ � �����\n";
    }
    void Sound() 
    {
        cout << "������� ����� ����������� ���� ��������\n";
    }
};

int main()
{
    setlocale(0, "ru");

    Elephant obj1("Indian elephant", "Elephant", "Asia", 5000);
    obj1.Print();
    obj1.Eat();
    obj1.Sound();

    Dog obj2("German Shepherd", "Dog", "Europe", 30);
    obj2.Print();
    obj2.Eat();
    obj2.Sound();

    Cat obj3("Persian Cat", "Cat", "Asia", 5);
    obj3.Print();
    obj3.Eat();
    obj3.Sound();

    Parrot obj4("Macaw", "Parrot", "South America", 2);
    obj4.Print();
    obj4.Eat();
    obj4.Sound();
}