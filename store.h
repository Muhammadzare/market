#ifndef STORE_H
#define STORE_H

#include <iostream>
#include <fstream>
#include <vector>
#include "helper.h"
#include "store.h"
#include "product.h"

using namespace std;

class Order
{
private:
    string m_customerName;
public:
    void setCustomerName();
    string getCustomerName();
    void addOrder();
    void showOrders();

friend class Store;
};

class Store : public Perishable , public ImPerishable , public Order
{    
public:
    Store(){}
    ~Store(){}
};
#endif