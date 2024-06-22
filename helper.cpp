#include "helper.h"

void shwoMenue()
{
    cout << "--------The Menue--------\n";
    cout << "1- Add Product.\n";
    cout << "2- Creat Order.\n";
    cout << "3- Dissplay All Products.\n";
    cout << "4- Dissplay All Orders.\n";
    cout << "5- Exite!\n";
    cout << "Enter your chois (an int 1-5): \n";
}

void makeLine()
{
    cout << ".____________________________________________________.\n";
}

bool isPerishable()
{
    char check;
    bool perishable;

    setPerishable:

    cout << "Is the product perishable? (Y|N) ";
    cin >> check;

    if(check == 'y' || check == 'Y')
        perishable = true;
    else if (check == 'n' || check == 'N')
        perishable = false;
    else
    { 
        cout << "Enter y or n !\n";
        goto setPerishable;
    }
    return perishable;
}

void showProduct(string fileName)
{
    vector<string> products;
    string product;
    ifstream productList;

    productList.open(fileName);
    if(productList.fail())
        cout << "Erorr file opening! \n";

    while (getline(productList , product))
        products.push_back(product);

    for(int i = 0; i < products.size(); i++)
        cout << products[i] << '\n';

    productList.close();
}

void ignore()
{
    cin.ignore();
    cin.get();
}
