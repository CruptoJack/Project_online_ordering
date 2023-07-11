#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Product {
private:
    string name;
    double price;
public:
    Product(string productName, double productPrice);
    // Методы доступа
};

class Order {
private:
    vector<Product> productList;
public:
    void addToOrder(Product product);
    void removeFromOrder(int index);

};
Product::Product(string productName, double productPrice) {
    name = productName;
    price = productPrice;
}
// Добавление продукта к заказу Order
void Order::addToOrder(Product product) {
    productList.push_back(product);
}

// Удаление продукта из заказа Order по его индексу в списке
void Order::removeFromOrder(int index) {
    if (index >= 0 && index < productList.size()) {
        productList.erase(productList.begin() + index);
    }
}
int main() {
    Order myOrder; // Создаем пустой заказ

    // Добавляем товар
    Product product1("Ноутбук", 1500);

    myOrder.addToOrder(product1);

    // Удаляем продукт из заказа
    myOrder.removeFromOrder(0);

}
