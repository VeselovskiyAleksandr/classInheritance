// classInheritance.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string voice = "";
public:
   
   virtual void showVoice()
    {
        cout << "\nVoice: " << voice;
    }
};
class Dog:public Animal
{
private:
    string dogVoice= "Wow Wow Wow";
public:
    void showVoice() override
    {
        cout << "\nDog voice: "<< dogVoice;
    }
};
class Cat :public Animal
{
private:
    string catVoice = "Myau Myau Myau";
public:
    void showVoice() override
    {
        cout << "\nCat voice: " << catVoice;
    }
};
class Cow :public Animal
{
private:
    string cowVoice = "Muuu Muuu Muuu";
public:
    void showVoice() override
    {
        cout << "\nCow voice: " << cowVoice;
    }
};
class Crow :public Animal
{
private:
    string crowVoice = "Carr Carr Carr";
public:
    void showVoice() override
    {
        cout << "\nCrow voice: " << crowVoice;
    }
};

int main()
{
    Animal* animal[4];
    animal[0] = new Dog();
    animal[1] = new Cat();
    animal[2] = new Cow();
    animal[3] = new Crow();
    for (int i = 0; i < 4; i++)
    {
        animal[i]->showVoice();
        delete animal[i];
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
