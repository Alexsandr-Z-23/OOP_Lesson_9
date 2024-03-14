#include <iostream>
#include<Windows.h>
using namespace std;
class Auto;
class Person 
{
    string name;
public:
    Person(string pers_name) : name{ pers_name } {}
   
    void Drive(const Auto&);
    void SetPrice(Auto& );


};



class Auto
{
    string autoname;
    unsigned int price;
    friend class Person;
public:
	Auto(string name, unsigned int price);

   
    string getName() { return autoname; };
    unsigned int getPrice() { return price; };
   /* friend void Person:: Drive(const Auto& car);
    friend void Person:: SetPrice(Auto& car);*/


    void print()
    {
        cout << autoname << " : " << price << endl;
    }

};

Auto::Auto(string p_name,unsigned int p_price)
{
    autoname = p_name;
    price = p_price;
    
}

 void Person::Drive(const Auto& car)
{
     cout<<name << " Автомобиль " <<car.autoname<< endl;
 }
 void Person::SetPrice(Auto& car)
 {
     car.getPrice();
 }


int main()
{
    setlocale(LC_ALL,"rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    

    string autoName;
    unsigned int Price;
    cout << "Введите марку авто : \n" << endl;
    cin >> autoName;
    cout << "Введите стоимость авто : \n" << endl;
    cin >> Price;
    cout << "\n\n";
    Auto auto1{ autoName,Price };
    Person Tom{"Tom"};
    Tom.Drive(auto1);

    Tom.SetPrice(auto1);
    auto1.print();


}

template<typename T,typename B> T Name(B, T);
