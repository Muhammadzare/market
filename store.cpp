#include "store.h"

void Order::setCustomerName()
{
    string customerName;
    cout << "What is your name? ";
    cin >> customerName;
    m_customerName = customerName;
}

string Order::getCustomerName(){return m_customerName;}

void Order::addOrder()
{
    int id;
    cout << "Enter the product's ID that you want: ";
    cin >> id;

    ofstream writeFile;
    fstream readFile;
    vector<string>products;
    string product;

    if (isPerishable())
    {
        readFile.open("perishableProduct.txt");
        if (readFile.fail())
            cout << "Error opening file. \n";
        while (getline(readFile , product))
            products.push_back(product);
        readFile.close();
    }
    else
    {
        readFile.open("imPerishableproduct.txt");
        if (readFile.fail())
            cout << "Error opening file. \n";
        while (getline(readFile , product))
            products.push_back(product);
        readFile.close(); 
    }
    id--;
    writeFile.open("orders.txt" , ios::app);
    for (int i = 0; i < products.size(); i++)
        if(i == id)
            writeFile << products[i] << '\n';   
    writeFile.close();
}

void Order::showOrders()
{
    system("cls");

    vector<string>orders;
    string order;
    fstream readOrdersFromFile;

    readOrdersFromFile.open("orders.txt");
    if(readOrdersFromFile.fail())
        cout << "Erorr file opening!\n";
    
    while (getline(readOrdersFromFile,order))
        orders.push_back(order);

    cout << Order::getCustomerName() << "'s Factor: \n";
    for(int i = 0; i < orders.size(); i++)
        cout << orders[i] << '\n';
    ignore();
}