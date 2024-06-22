#include "product.h"
#include "helper.h"
#include "store.h"

using namespace std;

int main()
{
    Store product;
    int choise;
    while (1)
    {
        system("cls");
        shwoMenue();
        cin >> choise;
        switch (choise)
        {
            case 1:
                system("cls");
                if(isPerishable())
                {
                    product.setExpirationDate();
                    product.Perishable::addProduct();
                }
                else
                    product.ImPerishable::addProduct();
                ignore();
                break;
            case 2:
                system("cls");
                cout << "Perishable Products :\n";
                showProduct("perishableProduct.txt");

                cout << "ImPerishableProducts :\n";
                showProduct("imPerishableProduct.txt");

                product.setCustomerName();
                product.addOrder();
                ignore();
                break;
            case 3:
                system("cls");
                cout << "Perishable Products :\n";
                showProduct("perishableProduct.txt");

                cout << "ImPerishableProducts :\n";
                showProduct("imPerishableProduct.txt");
                ignore();
                break;
            case 4:
                product.showOrders();
                break;
            case 5:
                return 0;
                break;
            default:
                cout << "Enter a number betwin 1-5 !\n";
                break;
        }
    }
    return 0;
}