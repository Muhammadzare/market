#include "product.h"

using namespace std;

void Product::setId()
{
    int id;
    cout << "enter ID: ";
    cin >> id;
    m_id = id;
}

int Product::getId(){return m_id;}

void Product::setName()
{
    string name;
    cout << "enter name: ";
    cin >> name;
    m_name = name;
}

string Product::getName(){return m_name;}

void Product::setPrice()
{
    int price;
    cout << "enter price: ";
    cin >> price;
    m_price = price;
}

int Product::getPrice(){return m_price;}

void Product::setStock()
{
    cin.ignore();
    int stock;
    cout << "enter stock: ";
    cin >> stock;
    m_stock = stock;
}

int Product::getStock(){return m_stock;}

void Perishable::setExpirationDate()
{
    string expirationDate;
    cout << "enter ExpirationDate: ";
    cin >> expirationDate;
    m_expirationDate = expirationDate;
}

string Perishable::getExpirationDate(){return m_expirationDate;}

void Perishable::addProduct()
{
    setId();
    setName();
    setPrice();
    setStock();

    fstream productList;
    productList.open("perishableProduct.txt" , ios::app);
    if (productList.fail())
        cout << "Error opening file!. \n";
    
    productList << getId() << "\t" << getName() << "\t  " << getPrice() << "$" << "\t" << getStock() << "\t" << getExpirationDate() << "\n";
    productList.close();
}

void ImPerishable::addProduct()
{
    setId();
    setName();
    setPrice();
    setStock();
    fstream productList;
    productList.open("imPerishableProduct.txt" , ios::app);
    if (productList.fail())
        cout << "Error opening file!. \n";
    
    productList << getId() << "\t" << getName() << "\t  " << getPrice() << "$" << "\t"  << getStock() << "\n";
    productList.close();
}