#include <iostream>
#include <string>
using namespace std;
class stock
{
private:
    int icode;
    string name;
    float price;
    int quantity;
    float discount;
    void FindDisc()
    {
        if (quantity <= 50)
        {
            discount = price * 0 / 100;
            cout << "discount 0" << endl;
        }
        else if (50 < quantity & quantity <= 100)
        {
            discount = price * 5 / 100;
            cout << "got 5% discount" << endl;
        }
        else if (quantity > 100)
        {
            discount = price * 10 / 100;
            cout << "got 10% discount" << endl;
        }
        else
        {
            cout << "no discount" << endl;
        }
    }

public:
    void Buy()
    {
        cout << "enter icode:";
        cin >> icode;
        cout << "enter item name:";
        cin.ignore();
        getline(cin, name);
        cout << "enter price:";
        cin >> price;
        cout << "enter quantity:";
        cin >> quantity;

        FindDisc();
        cout << endl;
    }
    void showall()
    {
        cout << "icode:" << icode << endl;
        cout << "item name:" << name << endl;
        cout << "price:" << price << endl;
        cout << "quantity:" << quantity << endl;
        cout << "discount value :" << discount << endl;

        cout << endl;
    }
};
int main()
{
    stock obj;
    obj.Buy();
    obj.showall();

    return 0;
}
