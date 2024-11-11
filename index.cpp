
#include <iostream>
#include <vector>
using namespace std;

class Menu {
    private:
    string item;
    int price, itemNo;

    public:
    Menu(int ItemNo, string Item, int Price) {
        itemNo = ItemNo;
        item = Item;
        price = Price;
    }

    string getItem() {
        return item;
    }

    int getItemNo() {
        return itemNo;
    }

    int getPrice() {
        return price;
    }
};

class Cafeteria {
    private:
    vector<Menu> ve;

    public:
    void add(int ItemNo, string Item, int Price) {
        Menu menu(ItemNo, Item, Price);
        ve.push_back(menu);
    }

    void order() {
        for (int i = 0; i < ve.size(); i++) {
            cout << ve[i].getItemNo() << ". " << ve[i].getItem() << ": " << ve[i].getPrice() << endl;
        }

        int ord, quant;
        cout << "Enter item Number for order: ";
        cin >> ord;
        cout << "Enter quantity of item: ";
        cin >> quant;

        for (int i = 0; i < ve.size(); i++) {
            if (ord == ve[i].getItemNo()) {
                int total = quant * ve[i].getPrice();
                cout << "Total bill: " << total << endl << endl;
                return;  // Exit after processing order
            }
        }
        cout << "Item not found!" << endl;  // Message if item number is not found
    }
};

int main() {
    Cafeteria cafe;
    cafe.add(1, "Masala Dosa", 80);
    cafe.add(2, "Paneer Dosa", 120);
    cafe.add(3, "Mushroom Dosa", 120);
    cafe.add(4, "Paneer and Mushroom Dosa", 180);
    cafe.add(5, "Idli and Sambar", 40);
    cafe.add(6, "Vada and Sambar", 70);

    cout << "<<<<<<<<<<South-India Menu>>>>>>>>>>" << endl << endl;
    cafe.order();

    return 0;
}
