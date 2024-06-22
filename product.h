#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Product
{
private:
    int m_id;
    string m_name;
    int m_price;
    int m_stock; 
public:
    Product(){}
    

    virtual void addProduct() = 0 ;
    
    void setId();
    int getId();

    void setName();
    string getName();

    void setPrice();
    int getPrice();

    void setStock();
    int getStock();

    virtual ~Product(){}
};

class Perishable : public Product
{
private:
    string m_expirationDate;
public:
    void setExpirationDate();
    string getExpirationDate();

    void addProduct();
};
class ImPerishable : public Product
{
public:
    void addProduct();
};
#endif