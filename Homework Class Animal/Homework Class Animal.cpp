#include <iostream>
using namespace std;

class Animal
{
    string name; // название
    string sp; // вид
    string continent;
    double kg;
public:
    Animal(){}
    Animal(string nm, string s, string cont, double k)
    {
        name = nm;
        sp = s;
        continent = cont;
        kg = k;
    }
    // void Input()
    void Print()
    {
        cout << name << "\t" << sp << "\t" << continent << "\t" << kg << endl;
    }
    void Eat()
    {
        cout << "ѕока что не пон€тно что!)\n";
    }
    void Sound()
    {
        cout << "ѕока что не пон€тно какие звуки издает!)\n";
    }
};
class Elephant :public Animal
{
public:
    Elephant(){}
    Elephant(string nm, string s, string cont, double k):Animal(nm,s,cont,k){}

    // переопределение методов
    void Eat()
    {
        cout << "—лоны траво€дные животные\n";
    }
    void Sound()
    {
        cout << "»щите слона в зоопарке, и услышите какие звуки издают!)\n";
    }
};

int main()
{
    setlocale(0, "ru");
    Elephant obj1("Indian elephant", "Elephant", "Asia", 5000);
    obj1.Print();
    obj1.Eat();
    obj1.Sound();
}